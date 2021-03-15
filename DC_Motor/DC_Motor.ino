int c1 = 0; 
int c2 = 0;
int buttonState = 0;

void setup()
{
  pinMode(12, OUTPUT); 
  pinMode(A0, INPUT); 
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  c2= analogRead(A0); 
  c1= 1024-c2;
  buttonState = digitalRead(2);
  if (buttonState == HIGH) {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH); 
    delayMicroseconds(c1);   
    digitalWrite(12, LOW);  
    delayMicroseconds(c2);  
  } else {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW); 
    delayMicroseconds(c1);   
    digitalWrite(12, HIGH);  
    delayMicroseconds(c2);  
  }
}
