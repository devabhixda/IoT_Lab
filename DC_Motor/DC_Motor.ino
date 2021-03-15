int c1 = 0; 
int c2 = 0;

void setup()
{
  pinMode(12, OUTPUT); 
  pinMode(A0, INPUT);  
}

void loop()
{
  c2= analogRead(A0); 
  c1= 1024-c2;
  digitalWrite(12, HIGH); 
  delayMicroseconds(c1);   
  digitalWrite(12, LOW);  
  delayMicroseconds(c2);  
}