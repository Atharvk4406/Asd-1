
void setup() {
  Serial.begin(9600);
}

void loop() {
  int gas = analogRead(A0);
  Serial.print("MQ2 raw reading: ");
  Serial.println(gas);
  delay(500);
}