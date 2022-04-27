
void setup() {
    Serial.begin(9600);
}

void loop() {
    // potentiometer reads values from 0 to 1024
    // map it to 0-255 to speed up the communication
    Serial.write(analogRead(A2 / 4));
    delay(30); // stabilize the pot
}
