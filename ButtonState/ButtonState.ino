const int buttonPin = 2;

bool buttonLastState = HIGH;
bool buttonCurentState = HIGH;

void setup() {
    Serial.begin(9600);
    pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
    buttonCurentState = digitalRead(buttonPin);

    if (buttonCurentState == LOW && buttonCurentState != buttonLastState) {
        Serial.println("Button changed.");
    }

    buttonLastState = buttonCurentState;

    delay(100);
}
