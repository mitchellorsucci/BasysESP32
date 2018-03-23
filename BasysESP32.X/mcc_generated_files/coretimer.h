
/**
  CORETIMER Generated Driver API Header File

  Company:
    Microchip Technology Inc.

  File Name:
    coretimer.h

  @Summary
    This is the generated header file for the CORETIMER driver using PIC32MX MCUs

  @Description
    This header file provides APIs for driver for CORETIMER.
    Generation Information :
        Product Revision  :  PIC32MX MCUs - pic32mx : v1.35
        Device            :  PIC32MX370F512L
        Driver Version    :  0.5
    The generated drivers are tested against the following:
        Compiler          :  XC32 1.42
        MPLAB 	          :  MPLAB X 3.55
*/

/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

#ifndef _CORETIMER_H
#define _CORETIMER_H


/**
 Section: Included Files
*/

#include <stdbool.h>
#include <stdint.h>
#include <sys/attribs.h>

/**
 * @Param
    none

 * @Returns
    none

 * @Description
    Initializes core timer with appropriate count 
 *  and compare value as provided in MCC GUI

 * @Example
    CORETIMER_Initialize();
 
*/

void CORETIMER_Initialize(void);

/**
 * @Param
    none

 * @Returns
    Core Timer 32-bit count value.

 * @Description
 *  Returns the current Core Timer Count.

 * @Example
    uint32_t count;
    count = CORETIMER_CountGet();

 */

uint32_t CORETIMER_CountGet(void);

#ifdef __cplusplus  // Provide C++ Compatibility

    }

#endif

#endif //_CORETIMER_H
    
/**
 End of File
*/