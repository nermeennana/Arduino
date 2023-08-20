// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
}

void loop()
{
 // digitalWrite(0, HIGH);
  
  for(int i=0;i<=200;i+=5)
  {
    analogWrite(3,i);
  }
  delay(1000);
  for(int i=200;i>=0;i-=5)
  {
    analogWrite(3,i);
  }
  
  delay(1000); // Wait for 1000 millisecond(s)
  //digitalWrite(LED_BUILTIN, LOW);
  //delay(1000); // Wait for 1000 millisecond(s)
}
