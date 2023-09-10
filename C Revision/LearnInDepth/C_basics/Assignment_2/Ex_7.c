#include <stdio.h>
int Factorial(int n )
{
    if ( n == 0)
        return 1 ; 
    else 
        return n * Factorial(n-1) ; 
}
int main ()
{
    int n ; 
    printf("Enter the number : ") ; 
    scanf("%d",&n) ; 
    if (n < 0 ) 
        printf("Factorial doesn't exist") ; 
    else 
        printf("Factorial of %d is %d",n,Factorial(n)) ; 
    return 0 ; 
}