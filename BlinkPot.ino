/*
  BlinkPot
  Turns on differnt LEDs depending on the value of a potentiometer.

  by blacknirvana
 */
 
int potVal; // varaible to store potentiometer value

int potpin = 0;  // analog pin used to connect the potentiometer


void setup() {
  // initialize digital pin 8, 12 and 13 as output pins.
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  
  Serial.begin(9600);  // initialize serial communication at 9600 bits per second:
}


void loop() {
  
  potVal = analogRead(potpin);  // reads the value of the potentiometer (value between 0 and 1023)
  
  Serial.println(potVal); //send potentiometer value to the serial monitor for debugging
  
  if (potVal <= 340) //if the potentiometer value is less than 340
  {
    digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(12, LOW);   // turn the LED off (LOW is the voltage level)
    digitalWrite(8, LOW);   // turn the LED off (LOW is the voltage level)
  }

  if (potVal >= 341 && potVal <= 679) //if the potentiometer value is between 341 and 679
  {
    digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(13, LOW);   // turn the LED off (LOW is the voltage level)
    digitalWrite(12, LOW);   // turn the LED off (LOW is the voltage level)
  }
  
  if (potVal >= 680) //if the potentiometer value is more than 680
  {
    digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(13, LOW);   // turn the LED off (LOW is the voltage level)
    digitalWrite(8, LOW);   // turn the LED off (LOW is the voltage level)
  }
    
  
}
