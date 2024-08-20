**this document is in progress**
 
<img src="../images/pcblocations.png" width="300">

## fix for issue with left side OLED P2/SDA (pre 7/26/24 pcbs)
 - If you had the pcb printed before I uploaded the fixed gerber and kicad on 07/26/24, you will need to run a bit of extra solder or a jumper for the **left** side keyboard display to work. My appologies.
<img src="../images/pre_7-26-24_pcb_display_fix.jpeg" width="600">

## battery and power switch
 - For the battery pads, the positive and negative pads are vias. Basically, regardless of side, the positive pad is the one closest to the keys and the negative is the one closer to the outer edge. I mention it because the silkscreen on the crow side covers the + and - markers.
<img src="../images/negpos.png" width="600">

 - For the power switch, I recommend soldering it to the underside of the pcb, to give room for the battery. It works on either side.
<img src="../images/powerswitch.jpg" width="600">
<img src="../images/powerswitchunder.jpeg" width="600">

## bridge pads for mcu and oled
 - This uses the promicro_pretty footprint. Essentially, you need to bridge the pads on the correct side, depending on the orientation you want your mcu in. If you want the MCU flipped downward, bridge the pads on the bottom side of the pcb. If you want the mcu facing upward, bridge the pads on the top side of the pcb. (this is regardless of if you're using the pcb for the left or right side keyboard)

 - For the display through holes, you'll see pads above them on either side of the pcb. Bridge the pads on the bottom side of the pcb. (this is regardless of if you're using the pcb for the left or right side keyboard.

### here's an example of one where the mcu is faced down:
<img src="../images/bottompads.jpg" width="600">
<img src="../images/flippedmcu.jpg" width="600">

 ## ssd1306 pins
 - If you are using a ssd1306 oled, it will use the left 4 of the oled through holes (regardless of left or right keyboard). The fifth one on the right is for the CS connection that the nice!view requires.
<img src="../images/oledtotheleft.jpg" width="600">

 ## diodes
 - The diode direction is towards the mcu. I only mention it because the silkscreen on the crow side kind of hides it.

## bottom plate mounting
 - If using a bottom plate, You should have ordered it 1.2mm thick. Use the 2mm screws through the bottom plate into the spacers and then the 3mm screws through the pcb.
