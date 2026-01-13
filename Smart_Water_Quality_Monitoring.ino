
int phSensor = A0;
int led = 7;
int buzzer = 8;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(phSensor);
  Serial.println(value);

  // Approximate threshold (demo purpose)
  if (value < 300 || value > 700) {  // Unsafe pH range
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
  }

  delay(1000);
}
