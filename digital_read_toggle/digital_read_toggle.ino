// digital_read_toggle
const int switchPin = 7;
const int ledPin = 13;

int ledState = LOW;

void setup() {
  pinMode(switchPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (digitalRead(switchPin) == LOW) {
    ledState = ! ledState;
    digitalWrite(ledPin, ledState);
    delay(100);
    while (digitalRead(switchPin) == LOW) {}
  }
}


