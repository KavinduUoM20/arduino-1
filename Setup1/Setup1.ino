void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, HIGH);
  delay(100);
  digitalWrite(3, HIGH);
  digitalWrite(2, LOW);
  delay(100);
  digitalWrite(4, HIGH);
  digitalWrite(3, LOW);
  delay(100);
  digitalWrite(5, HIGH);
  digitalWrite(4, LOW);
  delay(100);
  digitalWrite(5, LOW);
  delay(100);
}
