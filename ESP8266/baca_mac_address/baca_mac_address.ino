#include <ESP8266WiFi.h>
 
void setup(){
   Serial.begin(115200); // buka koneksi serial
   delay(500);
   
   Serial.println();
   Serial.print("MAC: ");
   Serial.println(WiFi.macAddress()); // cetak MAC Address
}

void loop(){}
