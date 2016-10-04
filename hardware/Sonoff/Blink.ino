/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  This example code is in the public domain.

  modified 2016-10-04
  by Scott Fitzgerald
  
  by Michael Gries 
  
 */
 
#define LEDgreen 13  // ITEAD Sonoff LED (GPIO13)
#define LEDblue 2  // NodeMCU blue LED (pin D0)
#define LEDred 16  // NodeMCU red  LED (pin D4)

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(LEDgreen, OUTPUT);
  Serial.begin(74880);
  Serial.print("\n\rBlink example for ITEAD Sonoff devive reprogramming test ...");
}

// the loop function runs over and over again forever
void loop() {
  Serial.print(".");             // keep alive message on Serial Monitor
  digitalWrite(LEDgreen, LOW);    // turn the LED off by making the voltage LOW
  Serial.print("\n\rLED on  ...");
  delay(1000);                   // wait for a second
  digitalWrite(LEDgreen, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.print("\n\rLED off ...");
  delay(1000);                   // wait for a second
}
