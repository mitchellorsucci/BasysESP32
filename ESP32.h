/* 
 * File:   ESP32.h
 * Author: mitchellorsucci
 *
 * Created on February 9, 2018, 11:32 AM
 */
#include <xc.h>
#include <string.h>
#include <stdio.h>
#include "./mcc_generated_files/uart1.h"
#include "./mcc_generated_files/uart4.h"
#include "./mcc_generated_files/coretimer.h"

#ifndef ESP32_H
#define	ESP32_H

#define RX_BUF_SIZE     512
#define SERVER_FILE     "basys.txt"

void sendToESP(char * string);
void printString(char * string);
void printNumString(char * string, int length);

void resetESP();
void getDeviceInfo();
void checkAT();
void getWiFiMode();
void setWiFiMode(unsigned int mode);
void getCurrentAP();
void setCurrentAP(char * ssid, char * pwd, char * bssid);
int establishSSLConnection(char * remoteIP, int remotePort);
uint8_t getServerStatus(char * ip, int port);





#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* ESP32_H */

