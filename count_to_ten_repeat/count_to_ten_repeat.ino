// count_to_ten_repeat
void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int i = 1; i <= 10; i++) {
    Serial.println(i);
  }
}
