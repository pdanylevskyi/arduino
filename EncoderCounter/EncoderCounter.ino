const int pinClk = 13;
const int pinDt = 12;

int clkLastState;
int clkCurrentState;
int dtCurrentState;

void setup() {
    Serial.begin(9600);
    pinMode(pinClk, INPUT);
    pinMode(pinDt, INPUT);
    clkLastState = digitalRead(pinClk);
}

void loop() {
    dtCurrentState = digitalRead(pinDt);
    clkCurrentState = digitalRead(pinClk);
    if (clkCurrentState != clkLastState) {
        Serial.println("Encoder changed.");
        if (dtCurrentState == clkCurrentState) {
            Serial.println("Turned left.");
        } else {
            Serial.println("Turned right.");
        }
    }
    clkLastState = clkCurrentState; 
    delay(5);
}