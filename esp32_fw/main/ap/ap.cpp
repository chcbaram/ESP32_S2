/*
 * ap.cpp
 *
 *  Created on: 2021. 1. 9.
 *      Author: baram
 */




#include "ap.h"
#include "driver/uart.h"




void apInit(void)
{
  uartOpen(_DEF_UART1, 115200);
}

void apMain(void)
{

  while(1)
  {
    if (uartAvailable(_DEF_UART1) > 0)
    {
      uartPrintf(_DEF_UART1, "Rx : 0x%X\n", uartRead(_DEF_UART1));
    }

    delay(1);
  }
}
