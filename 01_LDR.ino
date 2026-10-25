
void setup() {
  Serial.begin(9600);
}

void loop() {
  int light = analogRead(A0);
  Serial.print("Light reading: ");
  Serial.println(light);
  delay(500);
}