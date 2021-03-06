/*****************************************************************************
 *   config.h:  config file for usbcdc example for NXP LPC13xx Family
 *   Microprocessors
 *
 *   Copyright(C) 2008, NXP Semiconductor
 *   All rights reserved.
 *
 *   History
 *   2008.07.19  ver 1.00    Preliminary version, first Release
 *
******************************************************************************/

/*
Overview:
	This example shows how to use the USB driver to implement a CDC class USB peripheral.
	To run this example, you must attach a USB cable to the board. See
	the "Getting Started Guide" appendix for details.

How to use:
   Click the debug toolbar button.
   Click the go button.
   Plug the LPCXpresso's target side into a PC using a USB cable retrofit
   or a 3rd party base board.

   * You should be able to see a new COM port on your PC.
*/

#define NXP_VID		  0x1FC9
#define MY_VID	  	  0x04D8

#define USB_VENDOR_ID NXP_VID 	// Vendor ID
#define USB_PROD_ID   MY_VID	// Product ID
#define USB_DEVICE    0x0100	// Device ID

#define LED_PORT 2		// Port for led
#define USR1_LED_BIT 9		// Bit on port for led
#define USR2_LED_BIT 10		// Bit on port for led


/*********************************************************************************
**                            End Of File
*********************************************************************************/
