#ifndef __bill__
#define __bill__
#include "stdint.h"
#include "stm32f4xx.h"
#define ack_flag    '1'
#define nack_flag   '0'
extern uint32_t NewCoinsCnt;
extern uint32_t OldCoinsCnt;
void SetBills(void);
void DisableBills(void);
void Uart4_Bill(uint8_t *p,uint8_t sizeData);
unsigned char  ReadMoneyFun(uint8_t BillActionStep);
uint8_t   CashCodeInit(void);
unsigned char   SetReceUsersMoney(void);
unsigned char   SetReceChangeMoney(void);
unsigned char   NoAcceptMoneyFun(void);
bool StringToHexGroup(unsigned char *OutHexBuffer, char *InStrBuffer, unsigned int strLength);
uint8_t  ReadBill(void);
uint8_t  ReadBills(void);

#endif

