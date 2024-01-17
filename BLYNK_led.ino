#define BLYNK_TEMPLATE_ID "TMPL3y5q3TZoT"
#define BLYNK_TEMPLATE_NAME "esp8266 led control"
#define BLYNK_AUTH_TOKEN "AQ6VNuhgcXw1QbRw4RxbPbwC7PrKQER3"


#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>  
#include <BlynkSimpleEsp8266.h>
 

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Fridsbee";  // Enter your Wifi Username
char pass[] = "98764321";  // Enter your Wifi password

int ledpin = 2;
void setup()
{     
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);    
  pinMode(ledpin,OUTPUT);
}

void loop()
{
  Blynk.run(); 
}
