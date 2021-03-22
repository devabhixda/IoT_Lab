int sensorInput;
double temp;
 
void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);
}
void loop() {
  sensorInput = analogRead(A0);  
  temp = (double)sensorInput / 1024; 
  temp = temp * 5;           
  temp = temp - 0.5;            
  temp = temp * 100;          
  Serial.print("Current Temperature: ");
  Serial.println(temp);
  if(temp < 20.00)
  {
  	digitalWrite(8, HIGH);
  }
  else
  {
  	digitalWrite(8, LOW);
  }
}