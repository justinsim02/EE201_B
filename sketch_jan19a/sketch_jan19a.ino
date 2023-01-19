void setup() {
  // Serial.begin(9600)
  // Pin 1 sends messages, Pin 0 receives, send messages by Serial.println("MESSAGE")
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
