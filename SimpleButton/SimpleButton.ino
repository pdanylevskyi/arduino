void setup() {
    Serial.begin(9600);
    pinMode(2, INPUT_PULLUP);
    pinMode(8, OUTPUT);
}

void loop() {
    int value = digitalRead(2);
    Serial.println(value);

    if (value == 0) {
        digitalWrite(8, HIGH);
    } else {
        digitalWrite(8, LOW);
    }

    delay(1);
} 