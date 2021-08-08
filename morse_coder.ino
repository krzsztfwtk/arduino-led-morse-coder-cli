/*
Simple sketch to test printing a message. 
This will be used when:
    - iterating over an array
    - translating it to proper morse code and
    - printing a message
By PmXa (31-may-2020)
*/

#include "vowelTranslate.h"

int led = 13;
char message[] = "Hola, mundo! Como estas hoy? Sonrie!";
int numel;
int is_vowel;

void setup(){
    pinMode(led,OUTPUT);
    Serial.begin(9600);
    numel = sizeof(message);
    numel = numel/sizeof(message[0]);
}

void loop(){
    for(int i = 0; i < numel; i++){
        Serial.println(message[i]);
        Serial.print("Morse: ");
        is_vowel = vowelTranslate(message[i]);
        Serial.println(is_vowel);

        if(is_vowel){
            digitalWrite(led, HIGH);
        } else{
            digitalWrite(led,LOW);
        }

        delay(500);
    }
}
