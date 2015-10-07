// count_to_ten_once_while
void setup() {
  Serial.begin(9600);
  int i = 1;
  while (i <= 10) {
    Serial.println(i);
    i++;
  }
}

void loop() {
}
