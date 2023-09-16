#include "can.h"

#define MAN_BIT(REG,BIT,VAL)   (REG = (REG&(~(1<<BIT))) | (VAL << BIT ))
#define SET_BIT(REG,BIT)   MAN_BIT(REG,BIT,1)
#define CLR_BIT(REG,BIT)   MAN_BIT(REG,BIT,0)
int main()
{
	int x = 0 ; 
	for(int i = 0 ; i <=31 ; i ++ ) 
	{
		SET_BIT(x,i) ; 
		printf(" - 0x%x\n",x); 
	}
    WelcomCan() ; 
    return 0 ; 
}