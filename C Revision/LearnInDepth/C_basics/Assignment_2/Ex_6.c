#include <stdio.h>
int main ()
{
    long int sum = 0 ; 
    int n ; 
    printf("Enter an integer : ") ; 
    scanf("%d",&n) ; 
    for(int i = 1 ; i <= n ; i ++ )
        sum += i ; 
    printf("Sum : %ld",sum) ; 
    return 0 ; 
}