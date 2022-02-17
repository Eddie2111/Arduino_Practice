
int motor1pin1 = 2;
int motor1pin2 = 3;
int motor2pin1 = 4;
int motor2pin2 = 5;


int motor1pin1 = 8;
int motor1pin2 = 9;
int motor2pin1 = 10;
int motor2pin2 = 11;



/// stored for catching arduino input 
void input_template(){ 
    char input;
    void setup() {
        Serial.begin(9600); 
        delay(2000);  
        Serial.println("Type something!");
    }
     
    void loop() {
        if(Serial.available()){
            input = Serial.read();
            Serial.print("You typed: " );
            Serial.println(input);
        }
    }
}
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
    
}
