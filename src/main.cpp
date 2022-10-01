// Mohawk College - COMP-10184 
// 
// Pulse Width Modulation - Test Program 
// 
#include <Arduino.h> 
boolean buttonState = false;
void setup() { 
  // configure the USB serial monitor 
  Serial.begin(115200); 
 
  // configure pin D4 as a digital output - this is the LED 
  pinMode(D4, OUTPUT); 
  pinMode(D5, INPUT_PULLUP);
  buttonState = false;
} 
 
 
 
void loop() { 
  
  if (digitalRead(D5) == 0) {
    buttonState = !buttonState;
    delay(100);
  }

  if(buttonState){
      int iVal;
      iVal = analogRead(A0);
      analogWrite(D4, iVal);
    } else{
      digitalWrite(D4, HIGH);
    }

  delay(100);
} 