# Sonoff mains switch using wifi

project uses FDTI-adaper for reprogramming ESP8266 chip

### used sources
1. [Pete Scargill Tech Blog][1] - Category Archives: [sonoff][2]
2. [Andre Miller Blog][2a] - Sonoff reprogramming guideline
3. [ESP8266HINTS][2b] - tag "sonoff"
4. [Reference Project][2c] - Sonoff-MQTT-OTA-Arduino 

#### Schematics
[Schematics][3]

#### Dimensions
![Dimensions][4]

#### Functional groups
<!-- ![parts][5] -->
![front][5a]
![rear][5b]
#### UART port 
![UART][6]
#### FTDI wiring
Use FTDI at 3v3 setting – press the Sonoff-button before power on the FTDI device. 

**DO NOT connect mains power while doing this**

![FTDI][7]

## The steps to program the device

1. Disconnect the AC power, power it only from the USB to Serial for safety
2. Hook up the USB to Serial as shown above
3. Hold down the switch
4. While holding down the switch, plug the USB to Serial into your PC
5. Let go of the switch
6. Use the Arduino IDE to select the correct USB port and upload your program.


<!-- References -->
[1]:  http://tech.scargill.net/ "Scargill's Tech Blog"
[2]:  http://tech.scargill.net/category/sonoff/ "Scargill's Tech Blog - sonoff"
[2a]: http://www.andremiller.net/content/programming-an-itead-sonoff-wireless-smart-switch-esp8266 "Programming guideline"
[2b]: https://esp8266hints.wordpress.com/tag/sonoff/ "blog tagged Sonoff"
[2c]: https://github.com/arendst/Sonoff-MQTT-OTA-Arduino "GitHub repository"
[3]:  Sonoff-schematic.pdf "schematics"
[4]:  Sonoff-dimension.png "dimensions"
[5]:  sonoff-parts-without-433.jpg
[5a]: Sonoff-front.GIF
[5b]: Sonoff-rear.GIF
[6]:  UART-port.png
[7]:  FTDI_2_Sonoff.jpg



