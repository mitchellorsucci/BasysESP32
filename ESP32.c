
#include "ESP32.h"


void printString(char * string) {
    while(!(UART4_StatusGet() & UART4_TX_COMPLETE )) {
           // Wait for the tranmission to complete
    }
    char * cursor = string;

    int i = 0;
    while(i < strlen(string)) {
        UART4_Write(cursor[i++]);
    }
}

void printNumString(char * string, int length) {
    int cursor = 0;
    while(cursor < length) {
        UART4_Write(string[cursor++]);
    }
}

void sendToESP(char * string) {
    while(!(UART1_StatusGet() & UART1_TX_COMPLETE )) {
           // Wait for the tranmission to complete
    }
    char * cursor = string;
    int i = 0;
    while(i < strlen(string)) {
        UART1_Write(cursor[i++]);

    }
}


void checkAT() {
    char tx[] = "AT\r\n";
    sendToESP(tx);
    delayMS(5);
    while(!(UART1_StatusGet() & UART1_RECEIVER_IDLE )) {
           // Wait for the data to fill the RX buffer
    }
    char rx[RX_BUF_SIZE];
    char * cur = rx;
    while(UART1_ReceiveBufferSizeGet() < 512) {
           *cur = UART1_Read();
           cur++;
    }

    *cur = '\0';
    printString(rx);
            
}

void resetESP() {
    printString("Resetting ESP32...\r\n");
    char tx[] = "AT+RST\r\n";
    sendToESP(tx);
    delayMS(500);
    while(!(UART1_StatusGet() & UART1_RECEIVER_IDLE )) {
           // Wait for the data to fill the RX buffer
    }
    
    char rx[RX_BUF_SIZE];
    char * cur = rx;
    while(UART1_ReceiveBufferSizeGet() < 512) {
        *cur++ = UART1_Read();
    }
    *cur = '\0';
    printString("ESP32 has been reset\r\n");
    printString(rx);
}

void getDeviceInfo() {
    printString("Getting Device Info...\r\n");
    char tx[] = "AT+GMR\r\n";
    sendToESP(tx);
    delayMS(50);
    
    while(!(UART1_StatusGet() & UART1_RECEIVER_IDLE )) {
           // Wait for the data to fill the RX buffer
    }
    
    char rx[RX_BUF_SIZE];
    char * cur = rx;
    while(UART1_ReceiveBufferSizeGet() < 512) {
        *cur++ = UART1_Read();
    }
    *cur = '\0';
    printString(rx);

}

void getWiFiMode() {
    printString("Getting WiFi mode...\r\n");
    char tx[] = "AT+CWMODE=?\r\n";
    sendToESP(tx);
    delayMS(20);
    
    while(!(UART1_StatusGet() & UART1_RECEIVER_IDLE )) {
           // Wait for the data to fill the RX buffer
    }
    
    char rx[RX_BUF_SIZE];
    char * cur = rx;
    while(UART1_ReceiveBufferSizeGet() < 512) {
        *cur++ = UART1_Read();
    }
    *cur = '\0';
    printString(rx);
}

void setWiFiMode(unsigned int mode) {
    printString("Setting WiFi mode...\r\n");
    char tx[50];
    if(mode > 3) {
        printString("WiFi mode must be between 0 and 3\r\n");
        printString("Consult the AT command manual for information about modes\r\n");
        return;
    }
    sprintf(tx, "AT+CWMODE=%d\r\n", mode);
    sendToESP(tx);
    delayMS(20);
    
    char rx[RX_BUF_SIZE];
    char * cur = rx;
    while(UART1_ReceiveBufferSizeGet() < 512) {
        *cur++ = UART1_Read();
    }
    *cur = '\0';
    printString(rx);
    
}

void getCurrentAP() {
    printString("Getting information about current AP...\r\n");
    char tx[] = "AT+CWJAP?\r\n";
    sendToESP(tx);
    delayMS(20);
    
    while(!(UART1_StatusGet() & UART1_RECEIVER_IDLE )) {
           // Wait for the data to fill the RX buffer
    }
    
    char rx[RX_BUF_SIZE];
    char * cur = rx;
    while(UART1_ReceiveBufferSizeGet() < 512) {
        *cur++ = UART1_Read();
    }
    *cur = '\0';
    printString(rx);
}

// Use BSSID if there are multiple APs with the same SSID.
// If this is not the case, pass in NULL for bssid
void setCurrentAP(char * ssid, char * pwd, char * bssid) {
    printString("Attempting to Connect to an AP...\r\n");
    char tx[100];
    sprintf(tx, "AT+CWJAP=\"%s\",\"%s\"", ssid, pwd);
    
    int cursor;
    if(bssid != NULL) {
        cursor = strlen(tx);
        sprintf(tx + cursor, ",\"%s\"", bssid);
    }
    
    cursor = strlen(tx);
    sprintf(tx + cursor, "\r\n");
    
    sendToESP(tx);
    delayMS(3000);
    
    while(!(UART1_StatusGet() & UART1_RECEIVER_IDLE )) {
           // Wait for the data to fill the RX buffer
    }
    
    char rx[RX_BUF_SIZE];
    char * cur = rx;
    while(UART1_ReceiveBufferSizeGet() < 512) {
        *cur++ = UART1_Read();
    }
    *cur = '\0';
    printString(rx);
    
}

int establishSSLConnection(char * remoteIP, int remotePort) {
    printString("Attempting to establish SSL connection...\r\n");
    char tx[200];
    sprintf(tx, "AT+CIPSTART=\"SSL\",\"%s\",%d\r\n", remoteIP, remotePort);
    sendToESP(tx);

    
    while(!(UART1_StatusGet() & UART1_RECEIVER_IDLE )) {
           // Wait for the data to fill the RX buffer
    }
    
    delayMS(500);
    char rx[RX_BUF_SIZE];
    char * cur = rx;
    while(UART1_ReceiveBufferSizeGet() < 512) {
//        int rxSize = UART1_ReceiveBufferSizeGet();
//        char status[100];
//        sprintf(status, "Size of RX Buffer: %d\r\n", 512 - rxSize);
//        printString(status);
        *cur++ = UART1_Read();
       
    }
    *cur = '\0';
//    char status[100];
//    sprintf(status, "Size of rx: %d\r\n", strlen(rx));
//    printString(status);
    char * connect;
    connect = strstr(rx, "CONNECT");
    if(NULL == connect) {
        return -1;
    }
    
    printString(rx);
    return 0;
}

// Link with the server to find out what current
// Behavior the MX3 should have
uint8_t getServerStatus(char * ip, int port) {
//    establishSSLConnection(ip, port);
    
    // Send an HTTP get request to the server for
    // a special file
    char request[200];
    int cursor = 0;
    cursor = sprintf(request, "GET %s HTTP/1.1\r\n", SERVER_FILE);
    cursor += sprintf(request + cursor, "Accept: text/html\r\n\r\n");
    
    int messageLength = strlen(request);
    char tx[20];
    sprintf(tx, "AT+CIPSEND=%d\r\n", messageLength);
    sendToESP(tx);
    delayMS(5);
    sendToESP(request);
    

    while(!(UART1_StatusGet() & UART1_RECEIVER_IDLE )) {
           // Wait for the data to fill the RX buffer
    }
    
    delayMS(200);
    
    char rx[RX_BUF_SIZE];
    char * cur = rx;
    int numBytes = 0;
    while(UART1_ReceiveBufferSizeGet() < 512) {
        

//        char status[100];
//        sprintf(status, "Size of RX Buffer: %d\r\n", 512 - rxSize);
//        printString(status);
        *cur++ = UART1_Read();
        
//        sprintf(status, "Num bytes read: %d\r\n", numBytes);
//        printString(status);

//        UART4_WriteBuffer(cur, numBytes);

        
        
    }
    
    
    *cur = '\0';

//    char status[100];
//    sprintf(status, "Size of rx: %d\r\n", strlen(rx));
//    printString(status);
    printString(rx);
    
    char * message = strstr(rx, "BEGIN:");
    message += 6;
    
    char contents[20];
    sscanf(message, "%s", contents);
    printString(contents);
    
    if(!strcmp(contents, "BLINK1")) {
        return 1;
    } else if (!strcmp(contents, "BLINK10")) {
        return 2;
    } else if (!strcmp(contents, "Alternate")) {
        return 3;
    }
    return 0;


}

