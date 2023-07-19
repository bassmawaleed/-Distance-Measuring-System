/*
 *
 * File Name: Main.c
 *
 * Author: Basma Walid
 *
 * Date Created : Oct 12,2022
 *
 *
 *******************************************************************************/

#include "ultrasonic.h" /* For calling the ultrasonic functions*/
#include "lcd.h" /* For printing the distance on the LCD*/
#include <avr/io.h> /* For Enabling the I-Bit for interrupts*/
#include "std_types.h" /* For the distance variable*/



int main()
{
	/* dist --> To Store the distance measured by the ultrasonic */
	uint8 dist;

	/* Calling the Initialization function of the ultrasonic */
	ULTRASONIC_init();

	/* Initializing the LCD */
	LCD_init();

	/* Enable the I-Bit */
	SREG |= (1<<7);

	/* Displaying the distance on the LCD*/
	LCD_displayString("Distance = ");
	while(1)
	{
		/* Reading the distance and Printing it on the screen */
		dist=ULTRASONIC_readDistance();
		LCD_moveCursor(0, 10);
		LCD_intgerToString(dist);
		LCD_displayString(" cm ");
	}
}

