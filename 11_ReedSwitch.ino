
void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
}

void loop() {
  Serial.println(digitalRead(2) == LOW
    ? "Switch closed / magnet detected"
    : "Switch open / magnet away");
  delay(300);
}