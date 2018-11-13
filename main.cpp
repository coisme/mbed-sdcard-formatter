#include "mbed.h"
#include "SDBlockDevice.h"
#include "FATFileSystem.h"

#define LED_ON  0
#define LED_OFF 1

// Progress indicator
DigitalOut led(LED3);

void handler(void) {
    led = !led;
}

int main(void) {
    SDBlockDevice sd(MBED_CONF_SD_SPI_MOSI, MBED_CONF_SD_SPI_MISO, MBED_CONF_SD_SPI_CLK, MBED_CONF_SD_SPI_CS);    

    printf("Formatting SD card...\n");

    led = LED_ON;

    int ret = FATFileSystem::format(&sd);
    
    if(ret == 0) {
        led = LED_OFF;
        printf("Formatted successfully.\n");
    } else {
        printf("Error: FATFileSystem::format() returns %d.", ret);
        Ticker ticker;
        ticker.attach(&handler, 0.5);
    }
}
