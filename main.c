/*
 * main.c
 *
 *  Created on: 2020 Nov 03 00:59:37
 *  Author: mosfe
 */




#include <DAVE.h>                 //Declarations from DAVE Code Generation (includes SFR declaration)

/**

 * @brief main() - Application entry point
 *
 * <b>Details of function</b><br>
 * This routine is the application entry point. It is invoked by the device startup code. It is responsible for
 * invoking the APP initialization dispatcher routine - DAVE_Init() and hosting the place-holder for user application
 * code.
 */

uint8_t Contador_Encoder_D=0;
uint8_t Contador_Encoder_E=0;

int main(void)
{
	DAVE_STATUS_t status;

	status = DAVE_Init();           /* Initialization of DAVE APPs  */

	if(status != DAVE_STATUS_SUCCESS)
	{
		/* Placeholder for error handler code. The while loop below can be replaced with an user error handler. */
		XMC_DEBUG("DAVE APPs initialization failed\n");

		while(1U)
		{

		}
	}


	/* Placeholder for user application code. The while loop below can be replaced with user application code. */
	while(1U)
	{

		if(DIGITAL_IO_GetInput(&Botao_2) == 0)
		{
			DIGITAL_IO_SetOutputHigh(&LED_2);
		}
		else
		{
			DIGITAL_IO_SetOutputLow(&LED_2);
		}

		if(DIGITAL_IO_GetInput(&Botao_1) == 0)
		{
			DIGITAL_IO_SetOutputHigh(&LED_1);
		}
		else
		{
			DIGITAL_IO_SetOutputLow(&LED_1);
		}
	}
}
