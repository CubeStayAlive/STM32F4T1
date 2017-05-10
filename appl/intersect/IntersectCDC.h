/*
 * IntersectCDC.h
 *
 *  Created on: 10.05.2017
 *      Author: manni1user
 */

#ifndef INTERSECT_INTERSECTCDC_H_
#define INTERSECT_INTERSECTCDC_H_

#include "stm32f4xx.h"

#define CDC_BUFFER_SIZE 64

void CDCGet(uint8_t* Buf, uint32_t *Len);
void CDCIF_SetLineCoding(uint8_t* pbuf, uint16_t length);
void CDCIF_GetLineCoding(uint8_t* pbuf, uint16_t length);

#endif /* INTERSECT_INTERSECTCDC_H_ */
