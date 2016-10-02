# Sonoff mains switch using wifi

project uses FDTI-adaper for reprogramming ESP8266 chip

### used sources
[Pete Scargill Tech Blog][1] - Category Archives: [sonoff][2]

#### Schematics
[Schematics][3]

#### Dimensions
![Dimensions][4]

#### Functional groups
![parts][5]
#### UART port 
![UART][6]
#### FTDI wiring
CLARIFICATION – the square pin is NOT ground – the square hole is 3v3. You should see that the round hole is connected to the flood filling (if you have good eyesight).

Use FTDI at 3v3 setting – in the original boards,  press the large button –THEN power up FTDI. DO NOT connect mains power while doing this – you will fry.

![FTDI][7]

<!-- References -->
[1]: http://tech.scargill.net/ "Scargill's Tech Blog"
[2]: http://tech.scargill.net/category/sonoff/ "Scargill's Tech Blog - sonoff"
[3]: Sonoff-schematic.pdf "schematics"
[4]: Sonoff-dimension.png "dimensions"
[5]: sonoff-parts-without-433.jpg
[6]: UART-port.png
[7]: FTDI_2_Sonoff.jpg



