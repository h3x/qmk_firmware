# Void 9 Macro Pad

A 9 button macropad based on the void 9 form factor and the splinky controller

* STL Files [V0id](https://www.thingiverse.com/thing:4222157)
* Splinky controller [plut0nium](https://github.com/plut0nium/0xB2)

Make example for this keyboard (after setting up your build environment):

    qmk compile -kb adam/void9-km default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Default Layer
```
Base Layer
 ┌──────────┬──────────┬──────────┐
 │          │          │          │
 │ SHFT +   │ SHFT +   │ SHFT     │
 │ CTRL + 1 │ CTRL + 2 │ CTRL + 3 │ 
 ├──────────┼──────────┼──────────┤ 
 │          │          │          │
 │ SHFT +   │ SHFT +   │ SHFT +   │
 │ CTRL + 4 │ CTRL + 5 │ CTRL + 6 │
 ├──────────┼──────────┼──────────┤ 
 │          │          │          │
 │ To Layer │ SHFT +   │ To Layer │
 │     1    │ CTRL + 7 │    2     │ 
 └──────────┴──────────┴──────────┘ 

 Layer 1   
 ┌──────────┬──────────┬──────────┐
 │          │          │          │
 │  Macro 1 │ Macro 2  │          │
 │          │          │          │ 
 ├──────────┼──────────┼──────────┤ 
 │          │          │          │
 │ Notepad  │  Chrome  │ Obsidian │
 │          │          │          │
 ├──────────┼──────────┼──────────┤ 
 │          │          │          │
 │          │ Outlook  │          │
 │          │          │          │ 
 └──────────┴──────────┴──────────┘ 

 Layer 2
 ┌──────────┬──────────┬──────────┐
 │          │          │          │
 │   f13    │   f14    │   f15    │
 │          │          │          │ 
 ├──────────┼──────────┼──────────┤ 
 │          │          │          │
 │   f16    │   f17    │   f18    │
 │          │          │          │
 ├──────────┼──────────┼──────────┤ 
 │          │          │          │
 │          │   f19    │          │
 │          │          │          │ 
 └──────────┴──────────┴──────────┘ 

 Macro 1:
    Create a new obsidian note (ctrl-n)
Macro 2:
    Enter meeting template
```
## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the top left key on the left half, or top right key on the right half, and then plug in the USB cable on that keyboard half.
* **Physical reset button**: In order to put the board in bootloader mode, press briefly the RESET button (marked R) while holding the BOOT button (the second one). If the buttons are not reachable (soldered upside down), the /RST pad can be shorted to GND, while the two smaller BOOT pads (next to D8) are maintained shorted.
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available.

### Wiring Diagram

GP5  GP4  GP3
🟩 - 🟩 - 🟩 GP29
|    |    |
🟩 - 🟩 - 🟩 GP28
|    |    |
🟩 - 🟩 - 🟩 GP27