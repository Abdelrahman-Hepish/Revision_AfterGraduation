#include <stdio.h>
#define PI     3.14
#define AreaOfCircle(R) (PI*R*R)
int main()
{
    float r ; 
    printf("Enter the radious : ") ; 
    scanf("%f",&r) ; 
    printf("Are of circle : %.2f",AreaOfCircle(r)); 
    return 0 ; 
}