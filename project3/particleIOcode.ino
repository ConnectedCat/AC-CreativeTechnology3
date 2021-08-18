const int potPIN = A0;
String potValue;

void setup() {
    pinMode(potPIN, INPUT);
    
    Particle.variable("pot_value", potValue);
}

void loop() {
    potValue = String( analogRead(potPIN) );
    delay(10);
}