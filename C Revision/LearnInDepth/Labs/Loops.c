#include <stdlib.h>
#include <stdio.h>
int main()
{
    long sum = 0 ; char c ;  
    scanf("%d",&c) ; 
    for(int i = 1 ; i <= c ; i++ )
    {
        sum += i ; 
    }
    printf("Sum : %ld",sum) ; 
    fflush(stdin) ; fflush(stdout) ; 
    scanf("%c",&c) ; 
    printf("C %c",c) ; 
    return 0 ; 
}