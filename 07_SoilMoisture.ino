
void setup() {
  Serial.begin(9600);
}

void loop() {
  int moisture = analogRead(A0);
  Serial.print("Soil moisture raw: ");
  Serial.println(moisture);
  delay(1000);
}