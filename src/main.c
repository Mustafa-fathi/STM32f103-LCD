/*
 * main.c
 *
 *  Created on: Jul 26, 2019
 *      Author: Hampota
 */
#include "LSTD_TYPES.h"
#include "MDIO_interface.h"
#include "HLCD_interface.h"
#include "MRCC_interface.h"


void main(void)
{


	MRCC_Initialize();
	MRCC_EnableClock(BUS_ABP2 , PERIPHERAL_GPIOA);
	MRCC_EnableClock(BUS_ABP2 , PERIPHERAL_GPIOB);

	HLCD_init();


	HLCD_Set_Position(1,5);
	HLCD_Print_String((u8 *)"10/8/1997");
	HLCD_Set_Position(0,5);


    while(1)
    {

    }



}
