void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  clockwise();
  delay(1000);
  stoprotation();
  delay(1000);
  anticlock();
  delay(1000);
}
void clockwise(){
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
}
void anticlock(){
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
}
void stoprotation(){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
}
