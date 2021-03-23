#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
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
}

void loop()
{
  Blynk.run();
}
