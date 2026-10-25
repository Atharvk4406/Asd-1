
void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
}

void loop() {
  Serial.println(digitalRead(2) == LOW
    ? "Possible flame signal detected"
    : "No flame signal");
  delay(300);
}