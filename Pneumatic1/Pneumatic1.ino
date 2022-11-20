void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);//Rodless
  pinMode(3, OUTPUT);//TN
  pinMode(4, OUTPUT);//Gripper
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
   
  digitalWrite(3,LOW);
  delay(1000);
  digitalWrite(4,LOW);
  delay(1000);
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  delay(1000);
  digitalWrite(3,LOW);
  delay(1000);
  digitalWrite(4,LOW);
  delay(1000);
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(2,HIGH);
  delay(1000);
}
