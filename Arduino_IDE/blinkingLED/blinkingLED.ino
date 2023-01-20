/* 
Alternates On/Off of system LED every 1s

Written by: Justin Sim
Date: 1/19/2023
*/
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);

}

void loop() {
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
  
}
