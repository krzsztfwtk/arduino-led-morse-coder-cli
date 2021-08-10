//---------------
//Functions used:
//---------------

extern int led;
extern int unit;

void dot(){
    digitalWrite(led,HIGH);
    delay(unit);
    digitalWrite(led,LOW);
    delay(unit);
    Serial.print('.');
}

void dash(){
    digitalWrite(led,HIGH);
    delay(3*unit);
    digitalWrite(led,LOW);
    delay(unit);
    Serial.print('-');
}

void letter_space(){
    delay(2*unit);
    Serial.print(' ');
}

void word_space(){
    delay(4*unit);
    Serial.println();
}