## parts
Most of this can be ordered from aliexpress. For the pcbs and plates, you can download the gerber files from this repo and have them printed by a website like jlcpcb.
### required
| qt | part | wireless | wired | note | 
| -- | ---- | --------- | --------------- | - |
| 2 | crowkb pcbs  | X | X | recommend 1.6mm thick |
| 46 | Kailh choc v1 style switches | X | X | |
| 46 | SOD-123 1n4148w smd diodes | X | X | |
| 2 | 3 x 6 x 4.3 momentary (reset) switch tht | X | X | |
| 2 | PJ320A TRRS tht | | X | |
| 2 | MSK-12C02 smd slide switch | X | | |
| 2 | 301230 battery | X | | |
| 46 | choc profile keycaps | X | X | I like the MBK stuff |
| 1 | trrs cable (not trs) | | X | |
| 10+ | small rubber feet (i.e. bumpons) | X | X | To maximize low profile, I used 1mm silicone rubber gasket seal. If you're not using a bottom plate, you'll need something at least 2mm tall |

### optional
| qt | part | wireless | wired | note |
| -- | ---- | --------- | --------------- | -- |
| 2 | bottom plates | X | X | Recommend 1.2mm thick. Will also need screws and spacers, listed lower |
| 2 | switch plates | X | X | Definitely 1.2mm thick, may be an extra ~$7 charge when you order these, because of the intricate cuts |
| 2 | nice!view eInk screens | X | |
| 2 | ssd1306 oled screens | | X |
| 46 | Kailh choc hot swap sockets | X | X | |
| | double side foam adhesive tape (battery) | X | | I used .5mm thick 10mm wide |
| 14 | 2mm or 3mm M2 spacer or insert nuts (threaded) | X | X | For bottom plate |
| 14 | 2mm M2 screws | X | X | For bottom plate |
| 14 | 3mm M2 screws | X | X | To mount pcb to bottom plate |
| | 2.54mm female socket headers | X | X | definitely recommend socketing your mcu and display |
| | 1n4148 diode legs (for socketing mcu) | X | X | [socketing mcu instructions](https://docs.splitkb.com/hc/en-us/articles/360011263059-How-do-I-socket-a-microcontroller)|


### mcu's i've used
| qt | part | wireless | wired | note |
| -- | ---- | --------- | --------------- | -- |
| 2 | nice!nano | X | | [zmk firmware in repo](../firmware/zmk) |
| 2 | promicro | | X | qmk firmware on the way |
| 2 | rp2040, promicro compatible | | X | tested kmk and qmk on a couple aliexpress helios clones |
