const int buttonPin = 2;

bool buttonLastState = LOW;
bool buttonCurentState = LOW;

void setup() {
    Serial.begin(9600);
    pinMode(buttonPin, INPUT);
}

void loop() {
    buttonCurentState = digitalRead(buttonPin);

    if (buttonCurentState == HIGH && buttonCurentState != buttonLastState) {
        Serial.println("Button changed.");
    }

    buttonLastState = buttonCurentState;

    delay(100);
}
