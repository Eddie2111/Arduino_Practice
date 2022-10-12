
char bt='S';
void setup()
{
  Serial.begin(38400);
  pinMode(LED_BUILTIN,OUTPUT);
}


void loop() {
delay(500);
bt=Serial.read();

if(bt=='W')
{
 digitalWrite(LED_BUILTIN,HIGH);
  delay(2000);
}

if(bt=='A')
{
 digitalWrite(LED_BUILTIN,HIGH);
  delay(2000);
}

if(bt=='S')
{
 digitalWrite(LED_BUILTIN,HIGH);
  delay(2000);
}

if(bt=='D')
{
 digitalWrite(LED_BUILTIN,HIGH);
  delay(2000);
}

if(bt=='Q')
{
 digitalWrite(LED_BUILTIN,HIGH);
  delay(2000); 
}
if(bt=='E')
{
 digitalWrite(LED_BUILTIN,HIGH);
  delay(2000); 
}
if(bt=='R')
{
 digitalWrite(LED_BUILTIN,HIGH);
  delay(2000); 
}
if(bt=='F')
{
 digitalWrite(LED_BUILTIN,HIGH);
  delay(2000); 
}

}
