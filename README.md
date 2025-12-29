# The Klipper Console

The ESP TFT Devboard is a devboard based on the ESP32-S3-WROOM-1 module with an integrated 40-pin connector designed to fully operate a TFT Display (one with a 3x8 RGB parallel interface) from the USB C connector only for power. It also has a bunch of breakout headers so that the GPIO pins can be accessed and used for other things, like a normal devboard whenever the display isn't being used. It consists of two USB C ports, one using the ESP32's built in USB connection and another using a USB to UART bridge (There is also a diode on each to ensure that the 5V doesn't backfeed if both USBs are connected). It then also consists of a boost converter to 24V for the LED Backlight and a current sink regulator to ensure it doesn't consume more than the rated current of 70mA.

## Features:
- Everything found on a normal devboard
- 2x USB C ports
- 24V, 5V and 3.3V outputs
- Support for a TFT 3x8 RGB display

## PCB
And this is my PCB. A bit difficult to include everything under 100mm but I managed to do it and got it to 65x100mm. Normal two layer PCB with copper ground areas:

<img src=Pictures/PCB_FRONT.png alt="PCB View" width="300"/> <img src=Pictures/PCB_BACK.png alt="PCB Rendered View" width="300"/> 

And the Schematic:

<img src=Pictures/SCHEMATIC.png alt="Schematic" width="800"/>

And here are some 3D views as well:

<img src=Pictures/3D_VIEW_1.png alt="Schematic" width="800"/>
<img src=Pictures/3D_VIEW_2.png alt="Schematic" width="800"/>

## Firmware Overview
I've included some basic firmware to get the TFT working but other than that it should function like a normal devboard

## BOM:
I have also included a .csv with the BOM list but here it is anyways.

 - 1x	CH340C	
 - 3x	Diode	
 - 2x	2N3904	
 - 2x	USB_C_Receptacle_USB2.0_16P	
 - 2x	5.7K	
 - 4x	5.1K	
 - 1x	47K	
 - 4x	1K	
 - 1x	1uF	
 - 3x	0.1uF
 - 4x	10uF
 - 6x	10K
 - 4x	27R
 - 1x	396K
 - 2x	100R
 - 1x	10K
 - 1x	MT3608
 - 1x	LD1117S33TR_SOT223
 - 1x	22R
 - 1x	ESP32-S3-WROOM-1
 - 2x	22uF
 - 1x	22uH
 - 2x	RED Led
 - 1x	GREEN Led
 - 2x	SW_Push
 - 1x	Conn_01x40_Socket
 - 1x	CAT4104
 - 1x	1.8K
 - 2x	Conn_01x14_Pin
 - 2x	Conn_01x04_Pin
 - 2x	Conn_01x09_Pin
(All parts for one devboard only)
