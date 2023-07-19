/******************************************************************************
 *
 * Module: ULTRASONIC
 *
 * File Name: ultrasonic.h
 *
 * Author: Basma Walid
 *
 * Date Created : Oct 12,2022
 *
 * Description: Source file for the Ultrasonic driver
 *
 *******************************************************************************/
#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_


#include "std_types.h"



/*******************************************************************************
 *                      Functions Definitions                                  *
 *******************************************************************************/


/* Description :
 * Initialize the ICU driver as required.
 * Setup the ICU call back function.
 * Setup the direction for the trigger pin as output pin through the GPIO driver.
 */
void ULTRASONIC_init(void);


/*Description :
 * Send the Trigger pulse to the ultrasonic .
 */
void ULTRASONIC_Trigger(void);


/*Description
 * Send the trigger pulse by using Ultrasonic_Trigger function.
 * Start the measurements by the ICU from this moment.
 */
uint16 ULTRASONIC_readDistance(void);

/*
 * Description :
 * This is the call back function called by the ICU driver.
 *
 * This is used to calculate the high time (pulse time) generated by the ultrasonic sensor.
 *
 */
void ULTRASONIC_edgeProcessing(void);

#endif /* ULTRASONIC_H_ */
