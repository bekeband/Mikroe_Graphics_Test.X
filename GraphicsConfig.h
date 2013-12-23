
/* GraphicsConfig */

#ifndef _GRAPHICSCONFIG_H
    #define _GRAPHICSCONFIG_H

//////////////////// COMPILE OPTIONS AND DEFAULTS ////////////////////

/*********************************************************************
* Overview: Blocking and Non-Blocking configuration selection. To
*			enable non-blocking configuration USE_NONBLOCKING_CONFIG
*			must be defined. If this is not defined, blocking 
*			configuration is assumed.
********************************************************************/
#define USE_NONBLOCKING_CONFIG  // Comment this line to use blocking configuration

/*********************************************************************
* Overview: Using Palettes, different colors can be used with the same
*			bit depth.
*
********************************************************************/
//    #define USE_PALETTE // Comment this line if Palette is not required.
    
    #ifdef USE_PALETTE
        //#define USE_PALETTE_EXTERNAL // Uncomment this line if Palette must be stored in External Memory.
    #endif

/*********************************************************************
* Overview: Keyboard control on some objects can be used by enabling
*			the GOL Focus (USE_FOCUS)support. 
*
*********************************************************************/

#define USE_FOCUS

/*********************************************************************
* Overview: Input devices used defines the messages that Objects will
*			process. The following definitions indicate the usage of 
*			the different input device:
*			- USE_TOUCHSCREEN - enables the touch screen support.
*			- USE_KEYBOARD - enables the key board support.
*
*********************************************************************/

#define USE_TOUCHSCREEN			// Enable touch screen support.
//#define USE_KEYBOARD			// Enable key board support.

/*********************************************************************
* Overview: To save program memory, unused Widgets or Objects can be 
*			removed at compile time. 
*
*********************************************************************/
    #define USE_GOL             // Enable Graphics Object Layer.
//#define USE_BUTTON          	// Enable Button Object.
#define USE_BUTTON_MULTI_LINE   // Enable Multi-Line Button Object
#define USE_WINDOW				// Enable Window Object.
#define USE_CHECKBOX			// Enable Checkbox Object.
#define USE_RADIOBUTTON			// Enable Radio Button Object.
#define USE_EDITBOX				// Enable Edit Box Object.
#define USE_LISTBOX				// Enable List Box Object.
#define USE_SLIDER          	// Enable Slider or Scroll Bar Object.
#define USE_PROGRESSBAR			// Enable Progress Bar Object.
#define USE_STATICTEXT			// Enable Static Text Object.
#define USE_PICTURE				// Enable Picture Object.
#define USE_GROUPBOX			// Enable Group Box Object.
#define USE_ROUNDDIAL			// Enable Dial Object.
#define USE_METER				// Enable Meter Object.
#define USE_DIGITALMETER        // Enable DigitalMeter Object.
//#define USE_TEXTENTRY			// Enable TextEntry Object.
#define USE_CUSTOM				// Enable Custom Control Object (an example to create customized Object).

/*********************************************************************
* Overview: Font data can be placed in two locations. One is in 
*			FLASH memory and the other is from external memory.
*			Definining one or both enables the support for fonts located
*			in internal flash and external memory. 
*	- USE_FONT_FLASH - Font in internal flash memory support.	
*	- USE_FONT_EXTERNAL - Font in external memory support.	
*
*********************************************************************/

#define USE_FONT_FLASH          // Support for fonts located in internal flash

//#define USE_FONT_EXTERNAL		// Support for fonts located in external memory

#define USE_UNSIGNED_XCHAR

/*********************************************************************
* Overview: Similar to Font data bitmaps can also be placed in 
*			two locations. One is in FLASH memory and the other is 
*			from external memory.
*			Definining one or both enables the support for bitmaps located
*			in internal flash and external memory. 
*	- USE_BITMAP_FLASH - Font in internal flash memory support.	
*	- USE_BITMAP_EXTERNAL - Font in external memory support.	
*
*********************************************************************/

#define USE_BITMAP_FLASH        // Support for bitmaps located in internal flash

//#define USE_BITMAP_EXTERNAL		// Support for bitmaps located in external memory


/*********************************************************************
* Overview: Define the malloc() and free() for versatility on OS 
*           based systems. 
*
*********************************************************************/
	#define GFX_malloc(size)    	malloc(size)
	#define GFX_free(pObj)    	    free(pObj)

/*********************************************************************
* Overview: Specifies the color depth used in the demo.
*
*********************************************************************/

    #define COLOR_DEPTH             16

/*********************************************************************
* Overview: Use RLE compression
*********************************************************************/
#define USE_COMP_RLE

#endif // _GRAPHICSCONFIG_H
