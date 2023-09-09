#include <stdio.h>
int main ()
{
    float n ; 
    printf("Enter a number : " )  ; 
    scanf("%f",&n) ; 
    if(n > 0  ) 
        printf("%f is positive ",n) ; 
    else if (n < 0)
        printf("%f is negative",n) ; 
    else 
        printf("%f is Zero",n) ; 
    return 0 ; 
}