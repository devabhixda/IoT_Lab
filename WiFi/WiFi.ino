#include <ESP8266WiFi.h>      

const char* ssid     = "Abhi";        
const char* password = "abcd1234";     

void setup() {
  Serial.begin(115200);        
  delay(10);
  WiFi.begin(ssid, password);    
  Serial.print("Connecting to ");
  Serial.print(ssid);
  while (WiFi.status() != WL_CONNECTED) { 
    delay(1000);
    Serial.print('.');
  }
  Serial.println('\n');
  Serial.println("Connection established!");  
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());   
}

void loop() { }
