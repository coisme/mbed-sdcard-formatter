# mbed-sdcard-formatter
Format SD card

## Import 

```
$ mbed import https://github.com/coisme/mbed-sdcard-formatter.git
```

## Compile

```
$ mbed compile -t GCC_ARM -m DISCO_L475VG_IOT01A
```

## Use

Insert SD card to the slot, then run the program. While SD card is being formatted, LED turns on. Once format is finished, it turns off. If error, LED blinks.

