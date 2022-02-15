
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
    pinMode(6,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    
    //for others
}
void loop(){
    
}
