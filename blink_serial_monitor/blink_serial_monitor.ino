// blink_serial_monitor
void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("on");
  digitalWrite(13, HIGH);   
  delay(200);              
  Serial.println("off");
  digitalWrite(13, LOW);   
  delay(200);           
}
