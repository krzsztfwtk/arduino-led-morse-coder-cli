/*
Simple sketch to test printing a message. 
This will be used when:
    - iterating over an array
    - translating it to proper morse code and
    - printing a message
By PmXa (31-may-2020)
*/

char message[] = "Hola, mundo!";
int numel;

void setup(){
    Serial.begin(9600);
    numel = sizeof(message);
    numel = numel/sizeof(message[0]);
    
    for (int x = 0; x < numel; x++){
        Serial.println(message[x]);
        // Waits for the data to be sent before sending more
        // Not needed right now
        // Serial.flush();
        delay(500);
    }
}

void loop(){
    // Empty, but just for now!
}