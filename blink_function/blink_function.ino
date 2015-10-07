// blink_function
const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  blink();
}

void loop() {
}

void blink() {
  for (int i = 1; i <= 10; i++) {
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);    
  }
}

