//------------------------
//  Morse Coder
//  Guty PmXa. 16-ago-2021
//------------------------

#include "dictionary.h"

const int led = 13;
const int unit = 75;
const int buzzer = 11;
const int freq = 294; // Equivalent to a D4

String message = "morse coder";

void setup(){
    pinMode(led,OUTPUT);
    Serial.begin(9600);
    message.toLowerCase();
    message += ' ';
}

void loop(){
    for(int i = 0; i < message.length(); i++){
        // letter_space should be up here to make the text look aligned
        letter_space();
        Serial.print(message[i]);
        translate_toMorse(message[i]);
    }
}
