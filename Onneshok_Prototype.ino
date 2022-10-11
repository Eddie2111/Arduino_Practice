#define ledPin 7
int state = 0;
#include <Servo.h>
Servo servo1;
Servo servo2;

#include <SoftwareSerial.h>

SoftwareSerial Bluetooth(0,1);

void setup() {
  pinMode(ledPin, OUTPUT);
  servo1.attach(9);
  servo2.attach(10);
  digitalWrite(ledPin, LOW);
  Bluetooth.begin(9600);
  Serial.begin(38400); // Default communication rate of the Bluetooth module
}

void loop() {
  if(Serial.available() > 0){ // Checks whether data is comming from the serial port
    state = Serial.read(); // Reads the data from the serial port
 }

 if (state == 'R') {
  digitalWrite(ledPin, LOW); // Turn LED OFF
  servo1.write(100);
  Serial.println("LED: UP"); // Send back, to the phone, the String "LED: ON"
  state = 0;
 }
 if (state == 'F') {
  digitalWrite(ledPin, LOW); // Turn LED OFF
  servo1.write(0);
  Serial.println("LED: DOWN"); // Send back, to the phone, the String "LED: ON"
  state = 0;
 }
 if (state == 'Q') {
  digitalWrite(ledPin, LOW); // Turn LED OFF
  servo2.write(0);
  Serial.println("LED: OPEN"); // Send back, to the phone, the String "LED: ON"
  state = 0;
 }
if (state == 'E') {
  digitalWrite(ledPin, LOW); // Turn LED OFF
  servo2.write(90);
  Serial.println("LED: CLOSE"); // Send back, to the phone, the String "LED: ON"
  state = 0;
 }

}



/*
#include <SoftwareSerial.h>

SoftwareSerial Bluetooth(0,1);

void setup() {
  Serial.begin(9600);
  Bluetooth.begin(9600);
}

void loop() {
  while (Serial.available()) {
      delay(1);
      Bluetooth.write(Serial.read());
  }
  while (Bluetooth.available()) {
       Serial.write(Bluetooth.read());
  }
}
*/




/*
 * int LED = 13; 
#include <SoftwareSerial.h> 
#define BTTX 3 
#define BTRX 2
#include <Servo.h>
Servo servo;
SoftwareSerial SerialBT(BTTX, BTRX); 

void setup(){
  pinMode(LED_BUILTIN,OUTPUT);
  SerialBT.begin(57600);
  servo.attach(9);
  SerialBT.println("Bluetooth connection established");
}

void loop(){

}
/*
 *   servo.write(0);
  delay(3000);

  servo.write(110);
  delay(3000);  
  */
 
 
