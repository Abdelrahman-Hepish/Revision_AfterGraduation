#include "Uart.h" 
#define UART0DR  *((volatile unsigned int * )(0x101f1000))

void UartSendMessage(char * message) 
{
	int i = 0 ; 
	for(i = 0 ; message[i] != '\0' ; i ++ ) 
	{
		UART0DR = message[i] ; 
	}
}