/**
  System Interrupts Generated Driver File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the generated manager file for the MPLAB(c) Code Configurator device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description:
    This source file provides implementations for MPLAB(c) Code Configurator interrupts.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.26.1
        Device            :  PIC32MX370F512L
        Version           :  1.02
    The generated drivers are tested against the following:
        Compiler          :  XC32 1.42
        MPLAB             :  MPLAB X 3.55

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/

#ifndef _PIN_MANAGER_H
#define _PIN_MANAGER_H
/**
    Section: Includes
*/
#include <xc.h>
/**
    Section: Device Pin Macros
*/
/**
  @Summary
    Sets the GPIO pin, RA0, high using LATAbits.LATA0.

  @Description
    Sets the GPIO pin, RA0, high using LATAbits.LATA0.

  @Preconditions
    The RA0 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA0 high (1)
    LD0_SetHigh();
    </code>

*/
#define LD0_SetHigh()          LATAbits.LATA0 = 1
/**
  @Summary
    Sets the GPIO pin, RA0, low using LATAbits.LATA0.

  @Description
    Sets the GPIO pin, RA0, low using LATAbits.LATA0.

  @Preconditions
    The RA0 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA0 low (0)
    LD0_SetLow();
    </code>

*/
#define LD0_SetLow()           LATAbits.LATA0 = 0
/**
  @Summary
    Toggles the GPIO pin, RA0, using LATAbits.LATA0.

  @Description
    Toggles the GPIO pin, RA0, using LATAbits.LATA0.

  @Preconditions
    The RA0 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RA0
    LD0_Toggle();
    </code>

*/
#define LD0_Toggle()           LATAbits.LATA0 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RA0.

  @Description
    Reads the value of the GPIO pin, RA0.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RA0
    postValue = LD0_GetValue();
    </code>

*/
#define LD0_GetValue()         PORTAbits.RA0
/**
  @Summary
    Configures the GPIO pin, RA0, as an input.

  @Description
    Configures the GPIO pin, RA0, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA0 as an input
    LD0_SetDigitalInput();
    </code>

*/
#define LD0_SetDigitalInput()  TRISAbits.TRISA0 = 1
/**
  @Summary
    Configures the GPIO pin, RA0, as an output.

  @Description
    Configures the GPIO pin, RA0, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA0 as an output
    LD0_SetDigitalOutput();
    </code>

*/
#define LD0_SetDigitalOutput() TRISAbits.TRISA0 = 0
/**
  @Summary
    Sets the GPIO pin, RA1, high using LATAbits.LATA1.

  @Description
    Sets the GPIO pin, RA1, high using LATAbits.LATA1.

  @Preconditions
    The RA1 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA1 high (1)
    LD1_SetHigh();
    </code>

*/
#define LD1_SetHigh()          LATAbits.LATA1 = 1
/**
  @Summary
    Sets the GPIO pin, RA1, low using LATAbits.LATA1.

  @Description
    Sets the GPIO pin, RA1, low using LATAbits.LATA1.

  @Preconditions
    The RA1 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA1 low (0)
    LD1_SetLow();
    </code>

*/
#define LD1_SetLow()           LATAbits.LATA1 = 0
/**
  @Summary
    Toggles the GPIO pin, RA1, using LATAbits.LATA1.

  @Description
    Toggles the GPIO pin, RA1, using LATAbits.LATA1.

  @Preconditions
    The RA1 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RA1
    LD1_Toggle();
    </code>

*/
#define LD1_Toggle()           LATAbits.LATA1 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RA1.

  @Description
    Reads the value of the GPIO pin, RA1.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RA1
    postValue = LD1_GetValue();
    </code>

*/
#define LD1_GetValue()         PORTAbits.RA1
/**
  @Summary
    Configures the GPIO pin, RA1, as an input.

  @Description
    Configures the GPIO pin, RA1, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA1 as an input
    LD1_SetDigitalInput();
    </code>

*/
#define LD1_SetDigitalInput()  TRISAbits.TRISA1 = 1
/**
  @Summary
    Configures the GPIO pin, RA1, as an output.

  @Description
    Configures the GPIO pin, RA1, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA1 as an output
    LD1_SetDigitalOutput();
    </code>

*/
#define LD1_SetDigitalOutput() TRISAbits.TRISA1 = 0
/**
  @Summary
    Sets the GPIO pin, RA2, high using LATAbits.LATA2.

  @Description
    Sets the GPIO pin, RA2, high using LATAbits.LATA2.

  @Preconditions
    The RA2 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA2 high (1)
    LD2_SetHigh();
    </code>

*/
#define LD2_SetHigh()          LATAbits.LATA2 = 1
/**
  @Summary
    Sets the GPIO pin, RA2, low using LATAbits.LATA2.

  @Description
    Sets the GPIO pin, RA2, low using LATAbits.LATA2.

  @Preconditions
    The RA2 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA2 low (0)
    LD2_SetLow();
    </code>

*/
#define LD2_SetLow()           LATAbits.LATA2 = 0
/**
  @Summary
    Toggles the GPIO pin, RA2, using LATAbits.LATA2.

  @Description
    Toggles the GPIO pin, RA2, using LATAbits.LATA2.

  @Preconditions
    The RA2 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RA2
    LD2_Toggle();
    </code>

*/
#define LD2_Toggle()           LATAbits.LATA2 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RA2.

  @Description
    Reads the value of the GPIO pin, RA2.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RA2
    postValue = LD2_GetValue();
    </code>

*/
#define LD2_GetValue()         PORTAbits.RA2
/**
  @Summary
    Configures the GPIO pin, RA2, as an input.

  @Description
    Configures the GPIO pin, RA2, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA2 as an input
    LD2_SetDigitalInput();
    </code>

*/
#define LD2_SetDigitalInput()  TRISAbits.TRISA2 = 1
/**
  @Summary
    Configures the GPIO pin, RA2, as an output.

  @Description
    Configures the GPIO pin, RA2, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA2 as an output
    LD2_SetDigitalOutput();
    </code>

*/
#define LD2_SetDigitalOutput() TRISAbits.TRISA2 = 0
/**
  @Summary
    Sets the GPIO pin, RA3, high using LATAbits.LATA3.

  @Description
    Sets the GPIO pin, RA3, high using LATAbits.LATA3.

  @Preconditions
    The RA3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA3 high (1)
    LD3_SetHigh();
    </code>

*/
#define LD3_SetHigh()          LATAbits.LATA3 = 1
/**
  @Summary
    Sets the GPIO pin, RA3, low using LATAbits.LATA3.

  @Description
    Sets the GPIO pin, RA3, low using LATAbits.LATA3.

  @Preconditions
    The RA3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA3 low (0)
    LD3_SetLow();
    </code>

*/
#define LD3_SetLow()           LATAbits.LATA3 = 0
/**
  @Summary
    Toggles the GPIO pin, RA3, using LATAbits.LATA3.

  @Description
    Toggles the GPIO pin, RA3, using LATAbits.LATA3.

  @Preconditions
    The RA3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RA3
    LD3_Toggle();
    </code>

*/
#define LD3_Toggle()           LATAbits.LATA3 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RA3.

  @Description
    Reads the value of the GPIO pin, RA3.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RA3
    postValue = LD3_GetValue();
    </code>

*/
#define LD3_GetValue()         PORTAbits.RA3
/**
  @Summary
    Configures the GPIO pin, RA3, as an input.

  @Description
    Configures the GPIO pin, RA3, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA3 as an input
    LD3_SetDigitalInput();
    </code>

*/
#define LD3_SetDigitalInput()  TRISAbits.TRISA3 = 1
/**
  @Summary
    Configures the GPIO pin, RA3, as an output.

  @Description
    Configures the GPIO pin, RA3, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA3 as an output
    LD3_SetDigitalOutput();
    </code>

*/
#define LD3_SetDigitalOutput() TRISAbits.TRISA3 = 0
/**
  @Summary
    Sets the GPIO pin, RA4, high using LATAbits.LATA4.

  @Description
    Sets the GPIO pin, RA4, high using LATAbits.LATA4.

  @Preconditions
    The RA4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA4 high (1)
    LD4_SetHigh();
    </code>

*/
#define LD4_SetHigh()          LATAbits.LATA4 = 1
/**
  @Summary
    Sets the GPIO pin, RA4, low using LATAbits.LATA4.

  @Description
    Sets the GPIO pin, RA4, low using LATAbits.LATA4.

  @Preconditions
    The RA4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA4 low (0)
    LD4_SetLow();
    </code>

*/
#define LD4_SetLow()           LATAbits.LATA4 = 0
/**
  @Summary
    Toggles the GPIO pin, RA4, using LATAbits.LATA4.

  @Description
    Toggles the GPIO pin, RA4, using LATAbits.LATA4.

  @Preconditions
    The RA4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RA4
    LD4_Toggle();
    </code>

*/
#define LD4_Toggle()           LATAbits.LATA4 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RA4.

  @Description
    Reads the value of the GPIO pin, RA4.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RA4
    postValue = LD4_GetValue();
    </code>

*/
#define LD4_GetValue()         PORTAbits.RA4
/**
  @Summary
    Configures the GPIO pin, RA4, as an input.

  @Description
    Configures the GPIO pin, RA4, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA4 as an input
    LD4_SetDigitalInput();
    </code>

*/
#define LD4_SetDigitalInput()  TRISAbits.TRISA4 = 1
/**
  @Summary
    Configures the GPIO pin, RA4, as an output.

  @Description
    Configures the GPIO pin, RA4, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA4 as an output
    LD4_SetDigitalOutput();
    </code>

*/
#define LD4_SetDigitalOutput() TRISAbits.TRISA4 = 0
/**
  @Summary
    Sets the GPIO pin, RA5, high using LATAbits.LATA5.

  @Description
    Sets the GPIO pin, RA5, high using LATAbits.LATA5.

  @Preconditions
    The RA5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA5 high (1)
    LD5_SetHigh();
    </code>

*/
#define LD5_SetHigh()          LATAbits.LATA5 = 1
/**
  @Summary
    Sets the GPIO pin, RA5, low using LATAbits.LATA5.

  @Description
    Sets the GPIO pin, RA5, low using LATAbits.LATA5.

  @Preconditions
    The RA5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA5 low (0)
    LD5_SetLow();
    </code>

*/
#define LD5_SetLow()           LATAbits.LATA5 = 0
/**
  @Summary
    Toggles the GPIO pin, RA5, using LATAbits.LATA5.

  @Description
    Toggles the GPIO pin, RA5, using LATAbits.LATA5.

  @Preconditions
    The RA5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RA5
    LD5_Toggle();
    </code>

*/
#define LD5_Toggle()           LATAbits.LATA5 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RA5.

  @Description
    Reads the value of the GPIO pin, RA5.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RA5
    postValue = LD5_GetValue();
    </code>

*/
#define LD5_GetValue()         PORTAbits.RA5
/**
  @Summary
    Configures the GPIO pin, RA5, as an input.

  @Description
    Configures the GPIO pin, RA5, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA5 as an input
    LD5_SetDigitalInput();
    </code>

*/
#define LD5_SetDigitalInput()  TRISAbits.TRISA5 = 1
/**
  @Summary
    Configures the GPIO pin, RA5, as an output.

  @Description
    Configures the GPIO pin, RA5, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA5 as an output
    LD5_SetDigitalOutput();
    </code>

*/
#define LD5_SetDigitalOutput() TRISAbits.TRISA5 = 0
/**
  @Summary
    Sets the GPIO pin, RA6, high using LATAbits.LATA6.

  @Description
    Sets the GPIO pin, RA6, high using LATAbits.LATA6.

  @Preconditions
    The RA6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA6 high (1)
    LD6_SetHigh();
    </code>

*/
#define LD6_SetHigh()          LATAbits.LATA6 = 1
/**
  @Summary
    Sets the GPIO pin, RA6, low using LATAbits.LATA6.

  @Description
    Sets the GPIO pin, RA6, low using LATAbits.LATA6.

  @Preconditions
    The RA6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA6 low (0)
    LD6_SetLow();
    </code>

*/
#define LD6_SetLow()           LATAbits.LATA6 = 0
/**
  @Summary
    Toggles the GPIO pin, RA6, using LATAbits.LATA6.

  @Description
    Toggles the GPIO pin, RA6, using LATAbits.LATA6.

  @Preconditions
    The RA6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RA6
    LD6_Toggle();
    </code>

*/
#define LD6_Toggle()           LATAbits.LATA6 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RA6.

  @Description
    Reads the value of the GPIO pin, RA6.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RA6
    postValue = LD6_GetValue();
    </code>

*/
#define LD6_GetValue()         PORTAbits.RA6
/**
  @Summary
    Configures the GPIO pin, RA6, as an input.

  @Description
    Configures the GPIO pin, RA6, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA6 as an input
    LD6_SetDigitalInput();
    </code>

*/
#define LD6_SetDigitalInput()  TRISAbits.TRISA6 = 1
/**
  @Summary
    Configures the GPIO pin, RA6, as an output.

  @Description
    Configures the GPIO pin, RA6, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA6 as an output
    LD6_SetDigitalOutput();
    </code>

*/
#define LD6_SetDigitalOutput() TRISAbits.TRISA6 = 0
/**
  @Summary
    Sets the GPIO pin, RA7, high using LATAbits.LATA7.

  @Description
    Sets the GPIO pin, RA7, high using LATAbits.LATA7.

  @Preconditions
    The RA7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA7 high (1)
    LD7_SetHigh();
    </code>

*/
#define LD7_SetHigh()          LATAbits.LATA7 = 1
/**
  @Summary
    Sets the GPIO pin, RA7, low using LATAbits.LATA7.

  @Description
    Sets the GPIO pin, RA7, low using LATAbits.LATA7.

  @Preconditions
    The RA7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA7 low (0)
    LD7_SetLow();
    </code>

*/
#define LD7_SetLow()           LATAbits.LATA7 = 0
/**
  @Summary
    Toggles the GPIO pin, RA7, using LATAbits.LATA7.

  @Description
    Toggles the GPIO pin, RA7, using LATAbits.LATA7.

  @Preconditions
    The RA7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RA7
    LD7_Toggle();
    </code>

*/
#define LD7_Toggle()           LATAbits.LATA7 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RA7.

  @Description
    Reads the value of the GPIO pin, RA7.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RA7
    postValue = LD7_GetValue();
    </code>

*/
#define LD7_GetValue()         PORTAbits.RA7
/**
  @Summary
    Configures the GPIO pin, RA7, as an input.

  @Description
    Configures the GPIO pin, RA7, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA7 as an input
    LD7_SetDigitalInput();
    </code>

*/
#define LD7_SetDigitalInput()  TRISAbits.TRISA7 = 1
/**
  @Summary
    Configures the GPIO pin, RA7, as an output.

  @Description
    Configures the GPIO pin, RA7, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA7 as an output
    LD7_SetDigitalOutput();
    </code>

*/
#define LD7_SetDigitalOutput() TRISAbits.TRISA7 = 0
/**
  @Summary
    Sets the GPIO pin, RF3, high using LATFbits.LATF3.

  @Description
    Sets the GPIO pin, RF3, high using LATFbits.LATF3.

  @Preconditions
    The RF3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RF3 high (1)
    IO_RF3_SetHigh();
    </code>

*/
#define IO_RF3_SetHigh()          LATFbits.LATF3 = 1
/**
  @Summary
    Sets the GPIO pin, RF3, low using LATFbits.LATF3.

  @Description
    Sets the GPIO pin, RF3, low using LATFbits.LATF3.

  @Preconditions
    The RF3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RF3 low (0)
    IO_RF3_SetLow();
    </code>

*/
#define IO_RF3_SetLow()           LATFbits.LATF3 = 0
/**
  @Summary
    Toggles the GPIO pin, RF3, using LATFbits.LATF3.

  @Description
    Toggles the GPIO pin, RF3, using LATFbits.LATF3.

  @Preconditions
    The RF3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RF3
    IO_RF3_Toggle();
    </code>

*/
#define IO_RF3_Toggle()           LATFbits.LATF3 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RF3.

  @Description
    Reads the value of the GPIO pin, RF3.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RF3
    postValue = IO_RF3_GetValue();
    </code>

*/
#define IO_RF3_GetValue()         PORTFbits.RF3
/**
  @Summary
    Configures the GPIO pin, RF3, as an input.

  @Description
    Configures the GPIO pin, RF3, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RF3 as an input
    IO_RF3_SetDigitalInput();
    </code>

*/
#define IO_RF3_SetDigitalInput()  TRISFbits.TRISF3 = 1
/**
  @Summary
    Configures the GPIO pin, RF3, as an output.

  @Description
    Configures the GPIO pin, RF3, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RF3 as an output
    IO_RF3_SetDigitalOutput();
    </code>

*/
#define IO_RF3_SetDigitalOutput() TRISFbits.TRISF3 = 0
/**
  @Summary
    Sets the GPIO pin, RF4, high using LATFbits.LATF4.

  @Description
    Sets the GPIO pin, RF4, high using LATFbits.LATF4.

  @Preconditions
    The RF4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RF4 high (1)
    IO_RF4_SetHigh();
    </code>

*/
#define IO_RF4_SetHigh()          LATFbits.LATF4 = 1
/**
  @Summary
    Sets the GPIO pin, RF4, low using LATFbits.LATF4.

  @Description
    Sets the GPIO pin, RF4, low using LATFbits.LATF4.

  @Preconditions
    The RF4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RF4 low (0)
    IO_RF4_SetLow();
    </code>

*/
#define IO_RF4_SetLow()           LATFbits.LATF4 = 0
/**
  @Summary
    Toggles the GPIO pin, RF4, using LATFbits.LATF4.

  @Description
    Toggles the GPIO pin, RF4, using LATFbits.LATF4.

  @Preconditions
    The RF4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RF4
    IO_RF4_Toggle();
    </code>

*/
#define IO_RF4_Toggle()           LATFbits.LATF4 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RF4.

  @Description
    Reads the value of the GPIO pin, RF4.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RF4
    postValue = IO_RF4_GetValue();
    </code>

*/
#define IO_RF4_GetValue()         PORTFbits.RF4
/**
  @Summary
    Configures the GPIO pin, RF4, as an input.

  @Description
    Configures the GPIO pin, RF4, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RF4 as an input
    IO_RF4_SetDigitalInput();
    </code>

*/
#define IO_RF4_SetDigitalInput()  TRISFbits.TRISF4 = 1
/**
  @Summary
    Configures the GPIO pin, RF4, as an output.

  @Description
    Configures the GPIO pin, RF4, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RF4 as an output
    IO_RF4_SetDigitalOutput();
    </code>

*/
#define IO_RF4_SetDigitalOutput() TRISFbits.TRISF4 = 0
/**
  @Summary
    Sets the GPIO pin, RF5, high using LATFbits.LATF5.

  @Description
    Sets the GPIO pin, RF5, high using LATFbits.LATF5.

  @Preconditions
    The RF5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RF5 high (1)
    IO_RF5_SetHigh();
    </code>

*/
#define IO_RF5_SetHigh()          LATFbits.LATF5 = 1
/**
  @Summary
    Sets the GPIO pin, RF5, low using LATFbits.LATF5.

  @Description
    Sets the GPIO pin, RF5, low using LATFbits.LATF5.

  @Preconditions
    The RF5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RF5 low (0)
    IO_RF5_SetLow();
    </code>

*/
#define IO_RF5_SetLow()           LATFbits.LATF5 = 0
/**
  @Summary
    Toggles the GPIO pin, RF5, using LATFbits.LATF5.

  @Description
    Toggles the GPIO pin, RF5, using LATFbits.LATF5.

  @Preconditions
    The RF5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RF5
    IO_RF5_Toggle();
    </code>

*/
#define IO_RF5_Toggle()           LATFbits.LATF5 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RF5.

  @Description
    Reads the value of the GPIO pin, RF5.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RF5
    postValue = IO_RF5_GetValue();
    </code>

*/
#define IO_RF5_GetValue()         PORTFbits.RF5
/**
  @Summary
    Configures the GPIO pin, RF5, as an input.

  @Description
    Configures the GPIO pin, RF5, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RF5 as an input
    IO_RF5_SetDigitalInput();
    </code>

*/
#define IO_RF5_SetDigitalInput()  TRISFbits.TRISF5 = 1
/**
  @Summary
    Configures the GPIO pin, RF5, as an output.

  @Description
    Configures the GPIO pin, RF5, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RF5 as an output
    IO_RF5_SetDigitalOutput();
    </code>

*/
#define IO_RF5_SetDigitalOutput() TRISFbits.TRISF5 = 0

/**
    Section: Function Prototypes
*/
/**
  @Summary
    Configures the pin settings of the PIC32MX370F512L
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description
    This is the generated manager file for the MPLAB(c) Code Configurator device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    void SYSTEM_Initialize(void)
    {
        // Other initializers are called from this function
        PIN_MANAGER_Initialize();
    }
    </code>

*/
void PIN_MANAGER_Initialize(void);

#endif
