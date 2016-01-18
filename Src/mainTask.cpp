#include "maintask.h"
#include "cmsis_os.h"
#include "gpio.h"
#include "usart.h"
#include "adc.h"

const uint16_t ADCSignal = 0x0001;
osMessageQId mainTaskMessageQId;

void MainTask()
{	
	for(;;)
	{
		// Wait for adc result and write it to the UART connected to the PC.
		osEvent result = osMessageGet(mainTaskMessageQId, osWaitForever);
		HAL_UART_Transmit(&huart2, (uint8_t*)&result.value.v, 4, 100);
	}
}
