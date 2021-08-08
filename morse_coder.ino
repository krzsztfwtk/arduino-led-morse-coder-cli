/*
Simple sketch to test printing a message. 
This will be used when:
    - iterating over an array
    - translating it to proper morse code and
    - printing a message
By PmXa (27-may-2020)
*/

int number = 10;

void setup(){
    Serial.begin(9600);
    
    while(number > 0){
        Serial.println("Hola, mundo!");
        number = number - 1;
        delay(500);
    }
}

void loop(){
    // Empty, but just for now!
}
