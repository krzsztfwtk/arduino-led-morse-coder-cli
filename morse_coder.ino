//------------------------
//  Morse Coder
//  Guty PmXa. 10-jul-2021
//------------------------

#include "dictionary.h"

int led = 13;
int unit = 25;

String message = "morse_coder";

void setup(){
    pinMode(led,OUTPUT);
    Serial.begin(9600);
    message.toLowerCase();
    message += ' ';
}

void loop(){
    for(int i = 0; i < message.length(); i++){
        letter_space();
        Serial.print(message[i]);
        translate_toMorse(message[i]);
    }
}
