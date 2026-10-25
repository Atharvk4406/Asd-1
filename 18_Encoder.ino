
volatile long count = 0;

void encoderChanged() {
  if (digitalRead(2) != digitalRead(3)) {
    count++;
  } else {
    count--;
  }
}

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(2),
                  encoderChanged, CHANGE);
}

void loop() {
  static long previous = 0;
  long current;

  noInterrupts();
  current = count;
  interrupts();

  if (current != previous) {
    Serial.print("Encoder count: ");
    Serial.println(current);
    previous = current;
  }

  if (digitalRead(4) == LOW) {
    Serial.println("Encoder button pressed");
    delay(250);
  }
}