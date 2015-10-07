// digital_read
const int inputPin = 7;

void setup() {
  Serial.begin(9600);
  pinMode(inputPin, INPUT);
}

void loop() {
  int x = digitalRead(inputPin);
  Serial.println(x);
  delay(1000);
}


