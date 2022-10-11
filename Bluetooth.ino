int LED = 13; 
#include <SoftwareSerial.h> 
#define BTTX 1 
#define BTRX 0 
SoftwareSerial SerialBT(BTTX, BTRX); 

void setup(){
SerialBT.begin(57600); 
SerialBT.println("Bluetooth connection established"); 
}
void loop(){
delay(300);
if (SerialBT.available()) 
{
char msg = SerialBT.read(); 
//SerialBT.println(msg); 
if(msg = 'R') 
{
digitalWrite(13, HIGH); 
SerialBT.println("LED is ON"); 
}


}
}
