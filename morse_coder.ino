//-----------------------
//  Morse Coder
//  Guty PmXa. 8-jul-2021
//-----------------------

int led = 13;
int unit = 25;

String message = "Feliz cumpleaños Fer Chaka";

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

//---------------
//Functions used:
//---------------

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

//---------------------
//Morse code dictionary
//---------------------

void translate_toMorse(char letter){
  switch (letter){
    case 'a':
      dot(); dash();
      break;

    case 'b':
      dash(); dot(); dot(); dot();
      break;

    case 'c':
      dash(); dot(); dash(); dot();
      break;

    case 'd':
      dash(); dot(); dot();
      break;

    case 'e':
      dot();
      break;

    case 'f':
      dot(); dot(); dash(); dot();
      break;

    case 'g':
      dash(); dash(); dot();
      break;

    case 'h':
      dot(); dot(); dot(); dot();
      break;

    case 'i':
      dot(); dot();
      break;

    case 'j':
      dot(); dash(); dash(); dash();
      break;

    case 'k':
      dash(); dot(); dash();
      break;

    case 'l':
      dot(); dash(); dot(); dot();
      break;

    case 'm':
      dash(); dash();
      break;

    case 'n':
      dash(); dot();
      break;

    case 'o':
      dash(); dash(); dash();
      break;

    case 'p':
      dot(); dash(); dash(); dot();
      break;

    case 'q':
      dash(); dash(); dot(); dash();
      break;

    case 'r':
      dot(); dash(); dot();
      break;

    case 's':
      dot(); dot(); dot();
      break;

    case 't':
      dash();
      break;

    case 'u':
      dot(); dot(); dash();
      break;

    case 'v':
      dot(); dot(); dot(); dash();
      break;

    case 'w':
      dot(); dash(); dash();
      break;

    case 'x':
      dash(); dot(); dot(); dash();
      break;

    case 'y':
      dash(); dot(); dash(); dash();
      break;

    case 'z':
      dash(); dash(); dot(); dot();
      break;

    default:
      word_space();
      break;
  }
}
