// blink_variable

int ledPin = 13;
void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);   
  delay(200);              
  digitalWrite(ledPin, LOW);    
  delay(200);              
}

