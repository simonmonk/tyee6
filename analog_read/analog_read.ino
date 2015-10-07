// analog_read
const int analogPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int reading = analogRead(analogPin);
  float volts = reading * 5.0 / 1023.0;
  Serial.println(volts);
  delay(1000);
}
