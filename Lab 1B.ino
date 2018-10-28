int Rotator;
void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  pinMode(13 , OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
Rotator=analogRead(A0);
digitalWrite(13, HIGH);
delay(Rotator);
digitalWrite(13,LOW);
delay(Rotator);
Serial.println(Rotator);

}
