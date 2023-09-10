#include <stdio.h>
int main ()
{
    char op ; 
    double n1 , n2 ; 
    printf("Enter operator either + , - , * , / ") ; 
    scanf("%c",&op) ; 
    printf("Enter the operands : ") ; 
    scanf(" %f %f",&n1,n2) ; 
    switch (op)
    {
    case '+' : 
        printf("%f %c %f : %f",n1,op,n2,n1+n2) ; 
        break;
    case '-' : 
        printf("%f %c %f : %f",n1,op,n2,n1-n2) ; 
        break;
    case '*' : 
        printf("%f %c %f : %f",n1,op,n2,n1*n2) ; 
        break;
    case '/' : 
        if(n2 != 0 )
            printf("%f %c %f : %f",n1,op,n2,n1*n2) ; 
        else 
            printf("Error Division by Zero") ;
        break;    
    default:
        printf("Incorrect operation ") ; 
        break;
    }
    return 0 ; 
}