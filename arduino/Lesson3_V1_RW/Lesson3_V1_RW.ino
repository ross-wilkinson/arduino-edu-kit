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
}
