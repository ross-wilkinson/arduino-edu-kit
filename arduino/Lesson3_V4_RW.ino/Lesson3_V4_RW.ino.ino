void setup() {
  // set the LED pins as outputs/inputs
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(2,INPUT);
}

void loop() {
  // control LED lights as traffic light sequence
  // DESCRIPTION OF SEQUENCE
  // only one light should ever be on at a time
  // order -> green, yellow, red, repeat
  // when one light comes on the others should turn off
  // green light should stay on for 10 seconds
  // yellow light should stay on for 3 seconds
  // red light should stay on for 10 seconds

  // if button is not pressed, run traffic lights as normal
  if (digitalRead(2) == LOW) { 
  // control green light
  digitalWrite(3,HIGH); // turn the green LED on pin 3 ON
  delay(5000); // delay 5 sec
  digitalWrite(3,LOW); // turn the green LED on pin 3 OFF
  // control yellow light
  digitalWrite(4,HIGH); // turn the yellow LED on pin 4 ON
  delay(1000); // delay 1 sec
  digitalWrite(4,LOW); // turn the yellow LED on pin 4 OFF
  // control red light
  digitalWrite(5,HIGH); // turn the red LED on on pin 5 ON
  delay(5000); // delay 5 sec
  digitalWrite(5,LOW); // turn the red LED on on pin 5 OFF 
  }
  if (digitalRead(2) == HIGH) {
  digitalWrite(3,HIGH); // turn on green light
  digitalWrite(4,LOW); // turn off yellow light
  digitalWrite(5,LOW); // turn off red light
  delay(500); // delay 0.5 sec
  digitalWrite(3,LOW); // turn off green light
  delay(500); // delay 0.5 sec
  }
}
