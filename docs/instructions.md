**this document is in progress, just listing possible hold ups for now**

 - For the battery pads, the positive and negative pads are vias. Basically, regardless of side, the positive pad is the one closest to the keys and the negative is the one closer to the outer edge. I mention it because the silkscreen on the crow side covers the + and - markers.

 - For the power switch, I recommend soldering it to the underside of the pcb, to give room for the battery. It works on either side.

 - If using a bottom plate, You should have ordered it 1.2mm thick. Use the 2mm screws through the bottom plate into the spacers and then the 3mm screws through the pcb.

 - This uses the promicro_pretty footprint. Essentially, you need to bridge the pads on the correct side, depending on the orientation you want your mcu in. If you want the MCU flipped downward, bridge the pads on the bottom side of the pcb. If you want the mcu facing upward, bridge the pads on the top side of the pcb.

 - For the display through holes, you'll see pads above them on either side of the pcb. Bridge the pads on the bottom side of the pcb.

 - If you are using a ssd1306 oled, it will use the left 4 of the oled through holes (regardless of left or right keyboard). The fifth one on the right is for the CS connection that the nice!view requires.

 - The diode direction is towards the mcu. I only mention it because the silkscreen on the crow side kind of hides it.
