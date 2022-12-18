# TBK Mini

A handwired TBK Mini designed by BastardKD built with a splinky controller

* Build Files [BastasdKB Github](https://github.com/Bastardkb/TBK-Mini)
* Splinky Controller [plut0nium](https://github.com/plut0nium/0xB2)

Make example for this keyboard (after setting up your build environment):

    qmk compile -kb adam/tbk -km default

Customised Miryoku layout:

    qmk compile -kb adam/tbk -km miryoku

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the top left key on the left half, or top right key on the right half, and then plug in the USB cable on that keyboard half.
* **Physical reset button**: In order to put the board in bootloader mode, press briefly the RESET button (marked R) while holding the BOOT button (the second one). If the buttons are not reachable (soldered upside down), the /RST pad can be shorted to GND, while the two smaller BOOT pads (next to D8) are maintained shorted.
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available.


# Custom Miryoku Layout 
```
Base Layer
 ┌─────┬─────┬─────┬─────┬─────┬─────┐            ┌──────┬──────┬──────┬──────┬──────┬──────┐
 │ TAB │  Q  │  W  │  E  │  R  │  T  │            │  Y   │  U   │  I   │  O   │  P   │ DEL  │
 ├─────┼─────┼─────┼─────┼─────┼─────┤            ├──────┼──────┼──────┼──────┼──────┼──────┤
 │ ESC │  A  │  S  │  D  │  F  │  G  │            │  H   │  J   │  K   │  L   │ : ;  │ " '  │
 ├─────┼─────┼─────┼─────┼─────┼─────┤            ├──────┼──────┼──────┼──────┼──────┼──────┤
 │CTRL │  Z  │  X  │  C  │  V  │  B  │            │  N   │  M   │ , <  │ . >  │ / ?  │ SHFT │
 └─────┴─────┴─────┴─────┴─────┴─────┘            └──────┴──────┴──────┴──────┴──────┴──────┘
                    ┌────┐                                   ┌───────┐
                    │SHFT├────────┐                   ┌──────┤LT5/ALT│
                    └────┤LT2/BKSP├───────┐   ┌───────┤LT3/SP├───────┘
                         └────────┤LT1/ALT│   │LT4/ENT├──────┘
                                  └───────┘   └───────┘

Layer 1 [ MOVEMENT / MOUSE MOVEMENT ]
 ┌─────┬─────┬─────┬─────┬─────┬─────┐            ┌──────┬──────┬──────┬─────┬──────┬──────┐
 │     │     │     │     │     │     │            │      │PASTE │COPY  │ CUT │ UNDO │      │
 ├─────┼─────┼─────┼─────┼─────┼─────┤            ├──────┼──────┼──────┼─────┼──────┼──────┤
 │CAPS │ WIN │ ALT │CTRL │SHFT │     │            │MBTN4 │LEFT  │DOWN  │ UP  │ RGHT │MBTN5 │
 ├─────┼─────┼─────┼─────┼─────┼─────┤            ├──────┼──────┼──────┼─────┼──────┼──────┤
 │     │     │     │     │     │     │            │SC_UP │M_LEFT│M_DOWN│M_UP │M_RGHT│SC_DWN│
 └─────┴─────┴─────┴─────┴─────┴─────┘            └──────┴──────┴──────┴─────┴──────┴──────┘
                        ┌─────┐                           ┌─────┐
                        │     ├─────┐               ┌─────┤MBTN3│
                        └─────┤ WIN ├─────┐   ┌─────┤MBTN2├─────┘
                              └─────┤     │   │MBTN1├─────┘
                                    └─────┘   └─────┘

Layer 2 [ MEDIA ]
 ┌─────┬─────┬─────┬─────┬─────┬─────┐            ┌──────┬──────┬──────┬─────┬──────┬──────┐
 │     │     │     │     │     │     │            │      │      │      │     │      │SLEEP │
 ├─────┼─────┼─────┼─────┼─────┼─────┤            ├──────┼──────┼──────┼─────┼──────┼──────┤
 │CAPS │ WIN │ ALT │CTRL │SHFT │     │            │PLAY  │ PREV │VOL + │VOL -│ NEXT |      │
 ├─────┼─────┼─────┼─────┼─────┼─────┤            ├──────┼──────┼──────┼─────┼──────┼──────┤
 │     │     │     │     │     │     │            │      │      │      │     │      │POWER │
 └─────┴─────┴─────┴─────┴─────┴─────┘            └──────┴──────┴──────┴─────┴──────┴──────┘
                        ┌─────┐                           ┌─────┐
                        │     ├─────┐               ┌─────┤MUTE │
                        └─────┤     ├─────┐   ┌─────┤PLAY ├─────┘
                              └─────┤     │   │STOP ├─────┘
                                    └─────┘   └─────┘

Layer 3 [ NUMBERS ]
 ┌─────┬─────┬─────┬─────┬─────┬─────┐            ┌──────┬──────┬──────┬─────┬──────┬──────┐
 │     │ [ } │  1  │  2  │  3  │ ] } │            │      │      │      │     │      │      │
 ├─────┼─────┼─────┼─────┼─────┼─────┤            ├──────┼──────┼──────┼─────┼──────┼──────┤
 │     │ ; : │  4  │  5  │  6  │  =  │            │      │SHIFT │CTRL  │ALT  | WIN  │      |
 ├─────┼─────┼─────┼─────┼─────┼─────┤            ├──────┼──────┼──────┼─────┼──────┼──────┤
 │     │ ` ~ │  7  │  8  │  7  │  /  │            │      │      │      │     │      │      │
 └─────┴─────┴─────┴─────┴─────┴─────┘            └──────┴──────┴──────┴─────┴──────┴──────┘
                        ┌─────┐                           ┌─────┐
                        │  .  ├─────┐               ┌─────┤     │
                        └─────┤  0  ├─────┐   ┌─────┤     ├─────┘
                              └─────┤  -  │   │     ├─────┘
                                    └─────┘   └─────┘

Layer 4 [ SYMBOLS ]
 ┌─────┬─────┬─────┬─────┬─────┬─────┐            ┌──────┬──────┬──────┬─────┬──────┬──────┐
 │  {  │  !  │  @  │  #  │  )  │  }  │            │      │      │      │     │      │      │
 ├─────┼─────┼─────┼─────┼─────┼─────┤            ├──────┼──────┼──────┼─────┼──────┼──────┤
 │  :  │  $  │  %  │  ^  │  +  │     │            │      │      │      │     │      │      │
 ├─────┼─────┼─────┼─────┼─────┼─────┤            ├──────┼──────┼──────┼─────┼──────┼──────┤
 │  ~  │  &  │  *  │  (  │  |  │     │            │      │      │      │     │      │      │
 └─────┴─────┴─────┴─────┴─────┴─────┘            └──────┴──────┴──────┴─────┴──────┴──────┘
                        ┌─────┐                           ┌─────┐
                        │  (  ├─────┐               ┌─────┤     │
                        └─────┤  }  ├─────┐   ┌─────┤     ├─────┘
                              └─────┤  _  │   │     ├─────┘
                                    └─────┘   └─────┘

Layer 5 [ FUNCTION ROW ]
 ┌─────┬─────┬─────┬─────┬─────┬─────┐            ┌──────┬──────┬──────┬─────┬──────┬──────┐
 │     │ F1  │ F2  │ F3  │ F4  │PR_SC│            │      │      │      │     │      │      │
 ├─────┼─────┼─────┼─────┼─────┼─────┤            ├──────┼──────┼──────┼─────┼──────┼──────┤
 │HOME │ F5  │ F6  │ F7  │ F8  │PG UP│            │      │      │      │     │      │      │
 ├─────┼─────┼─────┼─────┼─────┼─────┤            ├──────┼──────┼──────┼─────┼──────┼──────┤
 │ END │ F9  │ F10 │ F11 │ F12 │PG DN│            │      │      │      │     │      │      │
 └─────┴─────┴─────┴─────┴─────┴─────┘            └──────┴──────┴──────┴─────┴──────┴──────┘
                        ┌─────┐                           ┌─────┐
                        │     ├─────┐               ┌─────┤     │
                        └─────┤     ├─────┐   ┌─────┤     ├─────┘
                              └─────┤     │   │     ├─────┘
                                    └─────┘   └─────┘


```


# Wiring Diagram 

![Wiring Diagram](images/wiring-guide.png)