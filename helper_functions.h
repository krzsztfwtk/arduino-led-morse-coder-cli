//---------------
//Functions used:
//---------------

extern const int led;
extern const int unit;
extern const int buzzer;
extern const int freq;

void dot(){
    Serial.print('.');
    digitalWrite(led,HIGH);
    tone(buzzer,freq);
    delay(unit);
    digitalWrite(led,LOW);
    noTone(buzzer);
    delay(unit);
}

void dash(){
    Serial.print('-');
    digitalWrite(led,HIGH);
    tone(buzzer,freq);
    delay(3*unit);
    digitalWrite(led,LOW);
    noTone(buzzer);
    delay(unit);
}

void letter_space(){
    delay(2*unit);
    Serial.print(' ');
}

void word_space(){
    delay(4*unit);
    Serial.println();
}
