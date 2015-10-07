// count_to_ten_once
void setup() {
  Serial.begin(9600);
  for (int i = 1; i <= 10; i++) {
    Serial.println(i);
  }
}

void loop() {
}
