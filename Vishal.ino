void setup()
{
  pinMode(1, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(3, INPUT);
}

void loop()
{
  int a=digitalRead(3);
  
  if(a==1)
  {
     digitalWrite(1, HIGH);
     delay(2000);
     digitalWrite(8 ,HIGH);
     digitalWrite(1, LOW);
  digitalWrite(8,HIGH);
  delay(340);
  digitalWrite(8,LOW);
    delay(340);
     digitalWrite(8,HIGH);
  delay(340);
  digitalWrite(8,LOW);
    delay(340);
     digitalWrite(8,HIGH);
  delay(340);
  digitalWrite(8,LOW);
    delay(340);
  }   
  
  
}
