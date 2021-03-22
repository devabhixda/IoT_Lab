int pirState = LOW;            
int val = 0;                   
 
void setup() 
{
  pinMode(13, OUTPUT);      
  pinMode(8, INPUT);     
}
 
void loop(){
  val = digitalRead(8);  
  if (val == HIGH) 
  {           
    digitalWrite(13, HIGH); 
    if (pirState == LOW) {
      pirState = HIGH;
    }
  } 
  else 
  {
    digitalWrite(13, LOW);
    if (pirState == HIGH){
      pirState = LOW;
    }
  }
}