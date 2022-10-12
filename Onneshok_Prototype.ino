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
void Up(){
  digitalWrite(ledPin, LOW); // Turn LED OFF
  servo1.write(100);
  Serial.println("LED: UP"); // Send back, to the phone, the String "LED: ON"
  state = 0;  
}
void Down(){
  digitalWrite(ledPin, LOW); // Turn LED OFF
  servo1.write(0);
  Serial.println("LED: DOWN"); // Send back, to the phone, the String "LED: ON"
  state = 0;
}
void Open(){
  digitalWrite(ledPin, LOW); // Turn LED OFF
  servo2.write(0);
  Serial.println("LED: OPEN"); // Send back, to the phone, the String "LED: ON"
  state = 0;
}
void Close(){
  digitalWrite(ledPin, LOW); // Turn LED OFF
  servo2.write(90);
  Serial.println("LED: CLOSE"); // Send back, to the phone, the String "LED: ON"
  state = 0;
}
void loop() {
  if(Serial.available() > 0){ // Checks whether data is comming from the serial port
    state = Serial.read(); // Reads the data from the serial port
  }

 if (state == 'R') {
  Up();
 }
 if (state == 'F') {
  Down();
 }
 if (state == 'Q') {
  Open();
 }
if (state == 'E') {
  Close();
 }

}
