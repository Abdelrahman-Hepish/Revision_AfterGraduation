#include <stdio.h> 
float avg(int *arr , int size)  ;
#define READ_BIT(REG,BIT)        ((REG&(1<<BIT))>>BIT)
#define WREITE_BIT(REG,BIT,VAL)  (REG = (REG & ~(1 << BIT ))| (VAL<<BIT))
void Circular_Shift(unsigned char*) ; 
void PrintBianry(char ) ; 
int main()
{
    printf("Hello world\n") ; 
    unsigned char j = 1  ;
    printf("0 - ") ; 
    PrintBianry(j) ; 
    for(int i = 1 ;i <=8 ; i++ )
    {
        Circular_Shift(&j) ; 
        printf("%d - ",i) ; 
        PrintBianry(j) ; 
    }
}
float avg(int *arr, int size )
{
  float ret = 0 ; 
  for(int i = 0 ; i < size ; i ++ )
  {
    ret += arr[i] ; 
  }  
  ret /= size ; 
  return ret ; 
}
void PrintBianry(char c) 
{
    for(int i = 7 ; i >= 0 ; i-- )
    {
       printf("%d ",READ_BIT(c,i));  
    }
    printf("\n") ; 
}
void Circular_Shift(unsigned char * CC) 
{
    unsigned char mainV = *CC ; 
    for(int i = 1 ; i <= 7 ; i++)
    {
        WREITE_BIT(*CC,i,READ_BIT(mainV,i-1)) ; 
    }
    WREITE_BIT(*CC,0,READ_BIT(mainV,7)) ; 
}