#include <stdio.h>
#include "global.h"
extern int G ; 
int * S(void) 
{
    static int x = 0 ; 
    printf("X is : %d\n",x)  ;
    return & x ; 
}

int main () 
{
    register int arr; 
    for (int i = 0 ; i <500 ;i++ )
    {
        printf("Address of arr is : value is %d\n",arr) ; 
    }
    return 0 ; 
}