#include <stdio.h> 
int main()
{
    double a , b , s ; 
    printf("Enter two real numbers : ") ;
    scanf("%lf %lf",&a,&b) ; 
    s = a ; a = b ; b = s ; 
    printf("After Swaping A : %lf , B : %lf ",a,b) ; 
    return 0  ;
}