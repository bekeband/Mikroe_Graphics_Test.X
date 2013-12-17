/* 
 * File:   main.h
 * Author: user
 *
 * Created on 2013. december 6., 19:49
 */

#ifndef MAIN_H
#define	MAIN_H

#ifdef	__cplusplus
extern "C" {
#endif

/*********************************************************************
 * Microchip Graphic Library Demo Application
 * The header file joins all header files used in the project.
 *********************************************************************
 * FileName:        MainDemo.h
 * Dependencies:    See INCLUDES section below
 * Processor:       PIC24F, PIC24H, dsPIC, PIC32
 * Compiler:        C30/C32
 * Company:         Microchip Technology, Inc.
 *
 * Software License Agreement
 *
 * Copyright © 2008 Microchip Technology Inc.  All rights reserved.
 * Microchip licenses to you the right to use, modify, copy and distribute
 * Software only when embedded on a Microchip microcontroller or digital
 * signal controller, which is integrated into your product or third party
 * product (pursuant to the sublicense terms in the accompanying license
 * agreement).
 *
 * You should refer to the license agreement accompanying this Software
 * for additional information regarding your rights and obligations.
 *
 * SOFTWARE AND DOCUMENTATION ARE PROVIDED “AS IS” WITHOUT WARRANTY OF ANY
 * KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY
 * OF MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR
 * PURPOSE. IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR
 * OBLIGATED UNDER CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION,
 * BREACH OF WARRANTY, OR OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT
 * DAMAGES OR EXPENSES INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL,
 * INDIRECT, PUNITIVE OR CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA,
 * COST OF PROCUREMENT OF SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY
 * CLAIMS BY THIRD PARTIES (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF),
 * OR OTHER SIMILAR COSTS.
 *
 * Author               Date        Comment
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * Anton Alkhimenok		05/29/2007
 * Sean Justice         02/07/2008  PIC32 support
 ********************************************************************/
#ifndef _MAIN_H
    #define _MAIN_H

////////////////////////////// INCLUDES //////////////////////////////
    #include "Compiler.h"
    #include "GenericTypeDefs.h"
    #include "graphics/Graphics.h"
    #include "drv_spi.h"
    #include "MCHP25LC256.h"
    #include "SST25VF016.h"
    #include "TouchScreen.h"
    #include "Potentiometer.h"
    #include "Beep.h"
    #include "SideButtons.h"
    #include "rtcc.h"
    #include "HardwareProfile.h"
    #include "CustomControlDemo.h"
    #include "./graphics/mchpGfxDrv.h"
    #include "cpld.h"

  /* tick counter from interrupts incremented the timer_4 interrupt */
extern volatile DWORD  tick;  // tick counter

/////////////////////////////////////////////////////////////////////////////
//                             FONTS USED
/////////////////////////////////////////////////////////////////////////////
extern const FONT_FLASH     GOLFontDefault;                 // default GOL font
extern const FONT_FLASH     GOLSmallFont;                   // small font
extern const FONT_FLASH     monofont;                       // equal width font


/////////////////////////////////////////////////////////////////////////////
//                            COLORS USED
/////////////////////////////////////////////////////////////////////////////
#define GRAY20      RGBConvert(51, 51, 51)
#define RED4        RGBConvert(139, 0, 0)
#define FIREBRICK1  RGBConvert(255, 48, 48)
#define DARKGREEN   RGBConvert(0, 100, 0)
#define PALEGREEN   RGBConvert(152, 251, 152)


#endif // _MAIN_H

#ifdef	__cplusplus
}
#endif

#endif	/* MAIN_H */

