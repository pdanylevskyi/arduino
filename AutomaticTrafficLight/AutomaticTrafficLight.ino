const int led0 = 8;
const int led1 = 7;
const int led2 = 4;

int timer = 3000;
int activeLed = 0;

void setup() {
    Serial.begin(9600);

    pinMode(led0, OUTPUT);
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
}

void loop() {
    light();
    delay(timer);
    activeLed = activeLed + 1;
    if (activeLed > 2) {
        activeLed = 0;
    }

}

void light() {
    if (activeLed == 0) {
        digitalWrite(led0, HIGH);
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
    }

    if (activeLed == 1) {
        digitalWrite(led0, LOW);
        digitalWrite(led1, HIGH);
        digitalWrite(led2, LOW);
    }

    if (activeLed == 2) {
        digitalWrite(led0, LOW);
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
    }
}