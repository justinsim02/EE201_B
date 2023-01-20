/* 
Alternates On/Off of system LED every 1s, 
Output on Serial Display, distinguished between when LED off versus on

Written by: Justin Sim
Date: 1/19/2023
*/
void setup() {

  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);                  
  Serial.begin(9600);

}

void loop() {
digitalWrite(13, HIGH);
Serial.println("Hello World!");
delay(5000);
digitalWrite(13, LOW);
Serial.println("It's 2023")
delay(5000);

}
