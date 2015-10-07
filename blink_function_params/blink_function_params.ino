// blink_function_params
const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  blink(ledPin, 20, 200);
}

void loop() {
}

void blink(int pin, int times, int period) {
  for (int i = 1; i <= times; i++) {
    digitalWrite(pin, HIGH);
    delay(period);
    digitalWrite(pin, LOW);
    delay(period);    
  }
}

