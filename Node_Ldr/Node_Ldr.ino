#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#define led D4
#define sensorPin A0
int sensorValue = 0; 
char auth[] = "4Y8Vp_xSMZt20-8xGUEVefLtj6BM78Wn";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Abhi";
char pass[] = "abcd1234";

void setup()
{
  // Debug console
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  pinMode(led, OUTPUT);
}

void loop()
{
  Blynk.run();
  sensorValue = analogRead(sensorPin); 
  Serial.println(sensorValue); 
  if(sensorValue < 400) 
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }
  Blynk.virtualWrite(V5, sensorValue);
  delay(100); 
}
