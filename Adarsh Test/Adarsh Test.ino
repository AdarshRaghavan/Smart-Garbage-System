

#include <CayenneMQTTESP8266.h>                                    
#include "Ultrasonic.h"                                            

Ultrasonic ultrasonic(14,12);                                       

char ssid[] = "Adarsh";                                           
char wifiPassword[] = "adarsh22";                                  
char username[] = "6e08cfa0-1dec-11ea-84bb-8f71124cfdfb";           
char Password[] = "54fc65f244e06324c72e01811c8d859172666cfd";       
char clientID[] = "7d39e2b0-1e1a-11ea-a38a-d57172a4b4d4";       
int GIu_Ultrasonic_Dist_CM=0;

void setup( ){  
   Serial.begin(9600);                                              
   Cayenne.begin(username, Password, clientID, ssid, wifiPassword);
}

void loop()  
  {
      delay(10000);
      GIu_Ultrasonic_Dist_CM=ultrasonic.Ranging(CM);                
      Cayenne.virtualWrite(V7, GIu_Ultrasonic_Dist_CM);            
      Serial.print(GIu_Ultrasonic_Dist_CM); 
      Serial.println(" cm" );
      Cayenne.loop();
  }


