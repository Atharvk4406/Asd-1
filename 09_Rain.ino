
void setup() {
  Serial.begin(9600);
}

void loop() {
  int rain = analogRead(A0);
  Serial.print("Rain sensor raw value: ");
  Serial.println(rain);
  delay(500);
}