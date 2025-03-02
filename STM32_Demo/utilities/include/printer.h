#ifndef  __MS_d245__h																									
#define  __MS_d245__h
#include "stdint.h"
#include "rtc.h"

typedef struct
{
	 unsigned char  P_Type1st;       /*第一份餐品购买的ID*/
	 unsigned char  P_Type2nd;       /*第二份餐品购买的ID*/
	 unsigned char  P_Type3rd;       /*第三份餐品购买的ID*/
	 unsigned char  P_Type4th;       /*第四份餐品购买的ID*/
   unsigned char  P_Number1st;     /*第一餐品购买的分数*/
	 unsigned char  P_Number2nd;     /*第二餐品购买的分数*/
	 unsigned char  P_Number3rd;     /*第三餐品购买的分数*/
	 unsigned char  P_Number4th;     /*第四餐品购买的分数*/
   unsigned char  P_Price1st;       /*第一份购买的餐品单总价*/
	 unsigned char  P_Price2nd;       /*第二份购买的餐品单总价*/
	 unsigned char  P_Price3rd;       /*第三份购买的餐品单总价*/
	 unsigned char  P_Price4th;       /*第四份购买的餐品单总价*/  
   unsigned char  P_Cost1st;       /*第一份购买的餐品单总价*/
	 unsigned char  P_Cost2nd;       /*第二份购买的餐品单总价*/
	 unsigned char  P_Cost3rd;       /*第三份购买的餐品单总价*/
	 unsigned char  P_Cost4th;       /*第四份购买的餐品单总价*/
   unsigned char  P_paymoney;      /*付了多少钱*/
   unsigned char  P_PayShould ;    /*该付多少钱*/
   unsigned	char  P_MoneyBack ;    /*找回多少钱给客户*/
   unsigned char  P_PayForCards ;  /*卡服了多少钱*/
   unsigned char  P_MealPrice ;	   /*单价多少钱*/
   unsigned char  P_PayForBills ;  /*纸币付了多少钱*/
   unsigned char  P_PayForCoins ;  /*硬币付了多少钱*/
}P_stuction;

extern P_stuction Print_Struct;

void PrintInit(void);
uint8_t CheckPrintStatus(void);
uint8_t PrintMessage(uint8_t flag);
void  SPRT(void);
void COPY(Struct_TD  a,unsigned char *p0,unsigned char *p1);

#endif	


