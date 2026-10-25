
void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
}

void loop() {
  Serial.println(digitalRead(2) == LOW
    ? "Tilt switch closed"
    : "Tilt switch open");
  delay(300);
}