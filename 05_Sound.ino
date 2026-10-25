
void setup() {
  Serial.begin(9600);
}

void loop() {
  int sound = analogRead(A0);
  Serial.print("Sound sensor raw value: ");
  Serial.println(sound);
  delay(100);
}