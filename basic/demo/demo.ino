
int ledPin = 13;
int waitTime = 1000;

//run once 
void setup() {
  // initialize pins as outputs
     pinMode(ledPin,OUTPUT);
}

//run by loops
void loop() {
  // put your main code here, to run repeatedly:
     digitalWrite(ledPin,HIGH);
     delay(waitTime);
     digitalWrite(ledPin,LOW);
     delay(waitTime);
}
