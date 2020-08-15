void setup() {
  // set the LED pins as outputs
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop() {
  // control LED lights
  digitalWrite(3,HIGH); // turn the green LED on pin 3 ON
  digitalWrite(4,HIGH); // turn the yellow LED on pin 4 ON
  digitalWrite(5,HIGH); // turn the red LED on on pin 5 ON
  delay(1000); // delay 1 second
  digitalWrite(3,LOW); // turn the green LED on pin 3 OFF
  digitalWrite(4,LOW); // turn the yellow LED on pin 4 OFF
  digitalWrite(5,LOW); // turn the red LED on on pin 5 OFF
  delay(1000); // delay 1 second
}
