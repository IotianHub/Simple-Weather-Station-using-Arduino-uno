#include <dht.h> 

#define dht_dpin A1 //no ; here. Set equal to channel sensor is ondht DHT;  

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 

void setup(){  

lcd.begin(16, 2); 

lcd.print("TEMP HUMIDITY"); 

Serial.begin(57600);  

} 

void loop()

{

 lcd.setCursor(1,3);

 DHT.read11(dht_dpin);  

//lcd.print(abs(moisture));  

//Serial.println(moisture);

lcd.print(round(DHT.temperature)); 

lcd.print("C  "); 

 lcd.print(round(DHT.humidity)); 

lcd.print("%   "); 

 }
