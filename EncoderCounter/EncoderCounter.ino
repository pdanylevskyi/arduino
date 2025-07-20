const int pinClk = 13;
const int pinDt = 12;

int clkLastState;
int clkCurrentState;

void setup() {
    Serial.begin(9600);
    pinMode(pinClk, INPUT);
    pinMode(pinDt, INPUT);
}

void loop() {
    clkCurrentState = digitalRead(pinClk);
    if (clkCurrentState != clkLastState) {
         Serial.println("Encoder changed.");
    }
    clkLastState = clkCurrentState;
}