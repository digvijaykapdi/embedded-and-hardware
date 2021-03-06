/******************************************************************************/
#ifndef _DELAY_H_
#define _DELAY_H_
/******************************************************************************/
#include"stm8s.h"
/******************************************************************************/
#define C_CountForOneMsDelay_U16 112u
#define ENABLE_DELAY_SEC         0
/******************************************************************************/
void delay_us(uint32_t us_count);
void delay_ms(uint16_t ms_count);
void delay_sec(uint16_t sec_count);
/******************************************************************************/
#endif
/******************************************************************************/