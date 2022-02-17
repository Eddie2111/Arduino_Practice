
int motor1pin1 = 2;
int motor1pin2 = 3;
int motor2pin1 = 4;
int motor2pin2 = 5;


int motor3pin1 = 8;
int motor3pin2 = 9;
int motor4pin1 = 10;
int motor4pin2 = 11;



/// stored for catching arduino input 

     

/// stored for catching arduino input 


void setup(){
    //motor driver 1
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    
    //motor driver 2
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);
    
    //for others
}
void loop(){
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
    
}
