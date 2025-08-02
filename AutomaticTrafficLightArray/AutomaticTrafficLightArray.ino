int timer = 1000;
int activeLed = 0;

int leds[] = {8, 7, 4, 2};
int size = 4;

void setup() {
    Serial.begin(9600);

    for (int i = 0; i < size; i++) {
        pinMode(leds[i], OUTPUT);
    }

}

void loop() {
    light();
    delay(timer);
    activeLed = activeLed + 1;
    if (activeLed > (size - 1)) {
        activeLed = 0;
    }

}

void light() {
    for (int i = 0; i < size; i++) {
        if (i == activeLed) {
            digitalWrite(leds[i], HIGH);
        } else {
            digitalWrite(leds[i], LOW);
        }
    }
}