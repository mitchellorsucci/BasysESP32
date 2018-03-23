#include <xc.h>
#include <stdio.h>
#include <string.h>
#include "./mcc_generated_files/mcc.h"
#include "ESP32.h"

void alternateLEDS();
void blinkLEDS();
void blinkLED(int ledNum);

void main(void) {
    SYSTEM_Initialize();
    delayMS(100);

    checkAT();
    delayMS(100);
    int i;
    for(i = 1; i <= 0xF0; i = i << 1) {
        LATA = i;
        delayMS(100);
        LATA = 0;
        delayMS(100);
    }
    
    while(1) {

        if(-1 == establishSSLConnection("192.168.1.104", 4443)) {
            delayMS(1000);
        } else {
            uint8_t status = getServerStatus("192.168.1.104", 4443);
            switch(status) {
                case 0: 
                    delayMS(1000);
                    break;
                case 1: 
                    blinkLED(0);
                    break;
                case 2: 
                    blinkLEDS();
                    break;
                case 3: 
                    alternateLEDS();
                    break;
                default:
                    delayMS(1000);
                    break;
            }
        }

    }
    
}

void blinkLED(int ledNum) {
    LATA = 1 << ledNum;
    delayMS(500);
    LATA = 0x0000;
    delayMS(500);
}

void blinkLEDS() {
    LATA = 0xFF;
    delayMS(500);
    LATA = 0x00;
    delayMS(500);
}

void alternateLEDS() {
    int i;
    for(i = 1; i <= 0xF0; i = i << 1) {
        LATA = i;
        delayMS(100);
        LATA = 0;
        delayMS(100);
    }
}




