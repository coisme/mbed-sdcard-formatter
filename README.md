# mbed-sdcard-formatter
Format SD card with FAT file system.

## Import 

```
$ mbed import https://github.com/coisme/mbed-sdcard-formatter.git
```

## Compile

```
$ mbed compile -t GCC_ARM -m [TARGET_BOARD]
```

This program is tested on [FRDM-K64F](https://os.mbed.com/platforms/FRDM-K64F/).

## Use

Insert SD card to the slot, then run the program. 

While SD card is being formatted, LED lights. Once format is finished, it turns off and blinks with long period (about 1 second). If error, LED blinks with fast period (about 0.1 second).

