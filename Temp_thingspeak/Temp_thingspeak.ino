#include <ESP8266WiFi.h>
 
String apiKey = "1E2G6O5AMGRE08QD";  

const char *ssid =  "Abhi";     
const char *pass =  "abcd1234";
const char* server = "api.thingspeak.com";
double temp;

WiFiClient client;
 
void setup() 
{
   Serial.begin(115200);
   delay(10);
   Serial.println("Connecting to ");
   Serial.println(ssid);
   WiFi.begin(ssid, pass);
   while (WiFi.status() != WL_CONNECTED) 
   {
     delay(500);
     Serial.print(".");
   }
   Serial.println("");
   Serial.println("WiFi connected");
}
 
void loop() 
{           
  temp = random(-50, 50);  

  if (client.connect(server,80)) 
  {  
     String postStr = apiKey;
     postStr +="&field1=";
     postStr += String(temp);
     postStr += "\r\n\r\n";

     client.print("POST /update HTTP/1.1\n");
     client.print("Host: api.thingspeak.com\n");
     client.print("Connection: close\n");
     client.print("X-THINGSPEAKAPIKEY: "+apiKey+"\n");
     client.print("Content-Type: application/x-www-form-urlencoded\n");
     client.print("Content-Length: ");
     client.print(postStr.length());
     client.print("\n\n");
     client.print(postStr);

     Serial.print("Temperature: ");
     Serial.print(temp);
     Serial.print(" degrees Celcius");
     Serial.println("%. Send to Thingspeak.");
  }
  client.stop();
  Serial.println("Waiting...");
  delay(10000);
}
