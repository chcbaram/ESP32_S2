/*
 * bsp.h
 *
 *  Created on: 2021. 1. 9.
 *      Author: baram
 */

#ifndef MAIN_BSP_BSP_H_
#define MAIN_BSP_BSP_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "def.h"

#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"
#include "esp_task_wdt.h"
#include "soc/rtc.h"
#include "esp_log.h"


#define _USE_LOG_PRINT    1

#if _USE_LOG_PRINT
#define logPrintf(fmt, ...)     printf(fmt, ##__VA_ARGS__)
#else
#define logPrintf(fmt, ...)
#endif




void bspInit(void);
uint32_t bspGetCpuFreqMhz(void);

void delay(uint32_t ms);
uint32_t millis(void);
uint32_t micros(void);

#ifdef __cplusplus
}
#endif

#endif /* MAIN_BSP_BSP_H_ */
