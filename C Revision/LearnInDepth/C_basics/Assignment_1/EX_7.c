#include <stdio.h> 
int main()
{
    double a , b ; 
    printf("Enter two real numbers : ") ;
    scanf("%lf %lf",&a,&b) ; 
    a = a + b  ; 
    b = a - b ; 
    a = a - b ; 
    printf("After Swaping A : %lf , B : %lf ",a,b) ; 
    return 0  ;
}