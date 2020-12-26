/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-button-library
 *
 * This example reads the state of a button with debounce and print it to Serial Monitor.
 */

#include <ezButton.h>
const int buttonPin = 7;    // the number of the pushbutton pin
const int ledPin = 13;      // the number of the LED pin

int ledState = LOW;         // the current state of the output pin

ezButton button(7);  // create ezButton object that attach to pin 7;

void setup() {
  Serial.begin(9600);
  button.setDebounceTime(50); // set debounce time to 50 milliseconds

  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);

  // set initial LED state
  digitalWrite(ledPin, ledState);
}

void loop() {
  button.loop(); // MUST call the loop() function first

  if(button.isPressed()){
    ledState = !ledState;
    Serial.println(ledState);
    digitalWrite(ledPin, ledState);
  }

  if(button.isReleased()){
    Serial.println("The button is released");
//    digitalWrite(13, LOW);
  }
}
