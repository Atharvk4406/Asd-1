
void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
}

void loop() {
  int state = digitalRead(2);
  Serial.println(state == LOW
    ? "Obstacle detected (common module)"
    : "No obstacle (common module)");
  delay(300);
}