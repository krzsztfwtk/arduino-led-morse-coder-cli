//------------------------
//  Morse Coder
//  Guty PmXa. 16-ago-2021
//  updated for CLI with bilingual messages by krzsztfwtk 2024-12-02
//------------------------

#include "dictionary.h"

const int led = 12;
const int unit = 75;
const int buzzer = 11;
const int freq = 294;

String message;

void setup() {
    pinMode(led, OUTPUT);
    Serial.begin(115200);
    Serial.println("[PL] Wprowadź wiadomość do zakodowania w Morse'a (wpisz 'zamknij', aby zakończyć):");
    Serial.println("[EN] Enter a message to encode in Morse (type 'exit' to quit):");
}

void loop() {
    if (Serial.available() > 0) {
        // Odczytaj wiadomość ze strumienia
        message = Serial.readStringUntil('\n');
        message.trim(); // Usuń zbędne spacje i nowe linie
        message.toLowerCase(); // Zamień na małe litery

        // Sprawdź, czy użytkownik wpisał "zamknij"
        if (message.equals("zamknij") || message.equals("exit")) {
            Serial.println("[PL] Program zakończony.");
            Serial.println("[EN] Program terminated.");
            while (true); // Zatrzymaj działanie programu
        }

        // Przetłumacz wiadomość na kod Morse'a
        Serial.println("[PL] Kodowanie wiadomości: " + message);
        Serial.println("[EN] Encoding message: " + message);
        for (int i = 0; i < message.length(); i++) {
            char currentChar = message[i];
            if (currentChar == ' ') {
                word_space(); // Przestrzeń między słowami
            } else {
                translate_toMorse(currentChar);
                letter_space(); // Przestrzeń między literami
            }
        }

        Serial.println("[PL] Wprowadź kolejną wiadomość:");
        Serial.println("[EN] Enter another message:");
    }
}
