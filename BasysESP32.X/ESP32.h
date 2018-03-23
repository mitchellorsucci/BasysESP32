/*
 * Header file for interfacing with the Pmod ESP32
 * From the Basys MX3
 * 
 * Author: Mitchell Orsucci
 * Email: mitchell.orsucci@ni.com
 * Last Modified: March 23, 2018
 */
#ifndef ESP32_H
#define	ESP32_H

#include <xc.h>
#include <string.h>
#include <stdio.h>
#include "./mcc_generated_files/uart1.h"
#include "./mcc_generated_files/uart4.h"
#include "./mcc_generated_files/coretimer.h"

/******************** MACROS ********************/
#define RX_BUF_SIZE     512
#define SERVER_FILE     "basys.txt"



/******************** FUNCTION DEFINITIONS ********************/
/*
 *  Sends the data pointed to by string
 *  out the UART1 port and to the ESP32
 */
void sendToESP(char * string);

/*
 *  Sends the data pointed to by string
 *  out the UART4 port and through the USB port
 *  labeled UART
 */
void printString(char * string);

/*
 *  Attempts to reset the Pmod ESP32 through
 *  the AT command AT+RST
 * 
 *  Does not do any error checking and returns before verifying
 *  That the device was indeed reset. Prints the response to
 *  the console
 */
void resetESP();

/*
 *  Gets device and firmware information from the Pmod ESP32
 *  Using the command AT+GMR
 * 
 *  Does not do any error checking and returns before verifying
 *  That the device responded properly. Prints the response to
 *  the console
 */
void getDeviceInfo();

/*
 *  Passes the most basic AT command "AT" to
 *  the Pmod ESP32
 * 
 *  Does not do any error checking and returns before verifying
 *  that the device responded properly. Prints the response to
 *  the console
 */
void checkAT();

/*
 *  Gets the current wifi mode configuration of the Pmod ESP32
 *  AT+CWMODE 
 * 
 *  Instead of returning the value, simply prints the response 
 *  to the console
 */
void getWiFiMode();

/*
 *  Sets the current wifi mode configuration of the Pmod ESP32
 *  AT+CWMODE=mode. Refer to the AT instruction specification
 *  to determine which mode to pass for your implementation
 * 
 *  Does not do any error checking and returns before verifying
 *  that the device responded properly. Prints the response to
 *  the console
 */
void setWiFiMode(unsigned int mode);

/*
 *  Gets the current wifi connection information and prints 
 * the information to the console
 * 
 *  Does not do any error checking and returns before verifying
 *  that the device responded properly. Prints the response to
 *  the console
 */
void getCurrentAP();

/*
 *  Sets the current wifi connection information and prints 
 * the information to the console
 *    ssid is the name of the network to connect to
 *    pwd is the password of the network to connect to
 *    bssid can be passed if the network is not broadcasting
 *          otherwise bssid can be left NULL
 * 
 *  Does not do any error checking and returns before verifying
 *  that the device responded properly. Prints the response to
 *  the console
 */
void setCurrentAP(char * ssid, char * pwd, char * bssid);

/*
 *  Attempts to establish an SSL connection at the IP address
 * referenced by "remoteIP". This value can be passed in the following 
 * format:   "192.168.7.2" with the quotes included. The port to
 * access  can be passed as an int
 * 
 * If the SSL connection is successfully established, returns 0
 * If the connection is not established, returns -1
 *
 * This assumes that the Pmod ESP32 is already connected to a network
 * and that there is some server on the address port already
 * 
 */
int establishSSLConnection(char * remoteIP, int remotePort);

/*
 *  Sends an HTTP GET request through an already established SSL connection
 * for a specific file.
 * 
 * Once the file is received, parses it and returns an int based on the
 * contents of the file. If an error occurs or the file is not received, 
 * returns 0
 */
uint8_t getServerStatus(char * ip, int port);





#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* ESP32_H */

