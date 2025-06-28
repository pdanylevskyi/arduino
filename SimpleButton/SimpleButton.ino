void setup() {
    Serial.begin(9600);
    pinMode(7, INPUT_PULLUP);
    pinMode(13, OUTPUT);
}

void loop() {
    int value = digitalRead(7);
    Serial.println(value);

    if (value == 0) {
        digitalWrite(13, HIGH);
    } else {
        digitalWrite(13, LOW);
    }

    delay(1);
} 