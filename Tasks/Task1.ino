// C++ code
//
void setup()
{
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
}

void loop()
{
  digitalWrite(A0, HIGH);
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(A1, HIGH);
  digitalWrite(A0, LOW);
  digitalWrite(A2, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(A2, HIGH);
  digitalWrite(A0, LOW);
  digitalWrite(A1, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}