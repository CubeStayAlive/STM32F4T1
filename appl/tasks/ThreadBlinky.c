/*
 * ThreadBlinky.c
 *
 *  Created on: 06.05.2017
 *      Author: manni1user
 */
#include "intersect/DefaultTask.h"
#include "stm32f4xx_hal.h"
#include "FreeRTOS.h"
#include "task.h"

void ThreadBlinky(void const * argument)
{
	UNUSED(argument);
	while (1)
	{
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_SET);
		vTaskDelay(200);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_SET);
		vTaskDelay(200);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_SET);
		vTaskDelay(200);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_SET);
		vTaskDelay(200);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_RESET);
		vTaskDelay(200);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_RESET);
		vTaskDelay(200);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_RESET);
		vTaskDelay(200);
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_RESET);
		vTaskDelay(200);
	}
}
