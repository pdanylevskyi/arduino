void setup() {
    pinMode(9, OUTPUT);
}

void loop() {
    for (int brightness = 0; brightness <= 255; brightness++) {
        analogWrite(9, brightness);
        delay(50);
    }
    delay(1000);

    for (int brightness = 255; brightness >= 0; brightness--) {
        analogWrite(9, brightness);
        delay(50);
    }
    delay(1000);
}
