#include <stdio.h>
int main ()
{
    float n1 , n2 , n3 ; 
    printf("Enter the 3 numbers : ") ; 
    scanf("%f %f %f",&n1,&n2,&n3) ; 
    if(n1 >= n2 )
    {
        if(n1 >= n3 )
        {
            printf("largest number is : %f",n1) ; 
        }else 
        {
           printf("largest number is : %f",n3) ;  
        }
    }else 
    {
        if(n2 >= n3 )
        {
            printf("largest number is : %f",n2) ; 
        }else 
        {
           printf("largest number is : %f",n3) ;  
        }
    }
    return 0 ; 
}