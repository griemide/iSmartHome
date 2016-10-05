/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  This example code is in the public domain.

  modified 2016-10-04
  by Scott Fitzgerald
  
  by Michael Gries 
  
   LINKS:
   see http://esp8266.github.io/Arduino/versions/2.1.0-rc2/doc/libraries.html#esp-specific-apis

  
 */
 
#define LEDgreen 13  // ITEAD Sonoff LED (GPIO13) - Pin 12
#define Btn_E_FW 0   // ITEAD Sonoff Button (GPIO0) - Pin 15
#define LEDblue 2  // NodeMCU blue LED (pin D0)
#define LEDred 16  // NodeMCU red  LED (pin D4)

int valBtn = HIGH; 

void printESPdiagnosis(){
    Serial.println(ESP.getFreeHeap());
    Serial.println(ESP.getChipId());
    Serial.println(ESP.getFlashChipId());
    Serial.println(ESP.getFlashChipSize());
    Serial.println(ESP.getFlashChipSpeed());
    Serial.println(ESP.getCycleCount());
}

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(LEDgreen, OUTPUT);
  pinMode(Btn_E_FW, INPUT);
  Serial.begin(74880);
  Serial.print("\n\rBlink example for ITEAD Sonoff devive reprogramming test ...");
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LEDgreen, LOW);    // turn the LED off by making the voltage LOW
  Serial.println("LED on  ...");
  delay(1000);                   // wait for a second
  digitalWrite(LEDgreen, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.println("LED off ...");
  delay(1000);                   // wait for a second
  valBtn = digitalRead(Btn_E_FW);
  if(valBtn == LOW) {
    Serial.println("Button pressed:");
    printESPdiagnosis();
  }
}
