/*
 * CDCTerminal.c
 *
 *  Created on: 10.05.2017
 *      Author: manni1user
 */

#include "intersect/IntersectCDC.h"
#include "usbd_cdc_if.h"

static uint8_t answ[] = "Hello!\n";

static uint8_t lcb[22];
static uint16_t lcblen=0;

void CDCGet(uint8_t* Buf, uint32_t *Len)
{
	CDC_Transmit_FS(answ, (uint32_t)strlen((char*)answ));
}

void CDCIF_SetLineCoding(uint8_t* pbuf, uint16_t length)
{

}
void CDCIF_GetLineCoding(uint8_t* pbuf, uint16_t length)
{

}
