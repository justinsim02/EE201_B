/* 
Library written for use with Common-Anode 7-Segment Display

Happy Birthday Letter Library and display command

Written by: Justin Sim
Date: 1/19/2023
*/

int myPins[] = {2,3,4,5,6,7,8,9};

void setup() {
  for (int i = 0; i <= 8; i++) {
    pinMode(myPins[i], OUTPUT);
  }
}
void displayHex(int number) {

  byte displayCode[] = {
    B11111111, //Reset
    B00101010, // H
    B00001010,  //  A
    B00001110,  //  P
    B00001110,  //  P
    B00101011, // Y
    B11111111, //Reset
    B00111000, //b
    B11101011, //I
    B01111110, //r
    B00111110, //T
    B00101010, // H
    B01101000, //d
    B00001010,  //  A
    B00101011, // Y
  };

  boolean chooseBit;
    for (int segment = 0; segment < 8; segment++) {
      chooseBit = bitRead(displayCode[number], segment);
      digitalWrite(myPins[segment], chooseBit);
    }

}    

void loop() {
  for (int i = 0; i < 15; i++) {
    displayHex(i);
    delay(1000);
    displayHex(0);
  }
}
