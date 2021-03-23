int sensorPin = A0;
int sensorValue = 0; 

void setup() 
{
	Serial.begin(9600);
  	pinMode(13, OUTPUT);
}
void loop() 
{
	sensorValue = analogRead(sensorPin); 
	Serial.println(sensorValue); 
  	if(sensorValue < 200) 
    {
    	digitalWrite(13, HIGH);
    }
  	else
    {
    	digitalWrite(13, LOW);
    }
	delay(100);                               
}