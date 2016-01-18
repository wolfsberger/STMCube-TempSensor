#include "debugTimer.h"
#include "mainTask.h"
#include "gpio.h"
#include "adc.h"

void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef * handle)
{
	uint32_t adcResult = HAL_ADC_GetValue(handle);
	osMessagePut(mainTaskMessageQId, adcResult, 0);
	HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_RESET);
}

void DebugTimer()
{
	HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_SET);
	HAL_ADC_Start_IT(&hadc1);
}
