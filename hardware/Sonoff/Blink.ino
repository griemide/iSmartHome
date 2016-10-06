/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  This example code is in the public domain.
  by Scott Fitzgerald
  
  reworked 2016-10-04
  modified 2016-10-06
  by Michael Gries 
  
   LINKS:
   see http://esp8266.github.io/Arduino/versions/2.1.0-rc2/doc/libraries.html#esp-specific-apis

  
 */
 
#define LEDgreen 13  // ITEAD Sonoff LED (GPIO13) - Pin 12
#define Btn_E_FW 0   // ITEAD Sonoff Button (GPIO0) - Pin 15
#define Relay 12     // ITEAD Sonoff Relay port (GPIO12) - Pin 10
#define SCL_PIN_5 14 // ITEAD Sonoff SCL output (GPIO14) - Pin 9
#define UART 74880   // COM-Port baud rate

//other
#define LEDblue 2  // NodeMCU blue LED (pin D0)
#define LEDred 16  // NodeMCU red  LED (pin D4)

int valBtn = HIGH; 
bool toggleRelay = HIGH;

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
  pinMode(Relay, OUTPUT);
  pinMode(SCL_PIN_5, OUTPUT);
  pinMode(Btn_E_FW, INPUT);
  
  Serial.begin(UART);
  Serial.print("\n\rBlink example for ITEAD Sonoff devive reprogramming test ...");
  printESPdiagnosis();
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LEDgreen, LOW);    // turn the LED off by making the voltage LOW
  Serial.print(ESP.getCycleCount()); Serial.println(": LED on  ... ");
  delay(1000);                   // wait for a second
  digitalWrite(LEDgreen, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.print(ESP.getCycleCount());  Serial.println(": LED off ...");
  delay(1000);                   // wait for a second
  valBtn = digitalRead(Btn_E_FW);
  if(valBtn == LOW) {
    Serial.println("Button pressed:");
    printESPdiagnosis();
    Serial.print("toggle Relay: "); Serial.println(toggleRelay);
    digitalWrite(Relay, toggleRelay);        // relay status
    Serial.print("signalling relay status on SCL output (port pin 5): "); Serial.println(toggleRelay);
    digitalWrite(SCL_PIN_5, toggleRelay);    // reports logical relay status
    toggleRelay = !toggleRelay;
  }
}
