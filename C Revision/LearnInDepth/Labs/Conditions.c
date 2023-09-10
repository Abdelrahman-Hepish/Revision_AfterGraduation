#include <stdio.h> 
#include <stdlib.h>
int main()
{
 char choice ; 
 float r , c , a ; 
 printf("Enter circle raduius : ") ; 
 scanf("%f",&r) ; 
 printf("R : %f",r) ; 
 printf("Enter your choice (a to print the area, c to print the circumerence ) : ") ; 
 scanf(" %c",&choice) ; 
 printf("Choice : %c",choice) ; 
 if (choice == 'a') 
    printf("The Area = %f",3.14*r*r) ;
 else if (choice == 'c')
    printf("The circumerence = %f",2*3.14*r) ; 
 else 
    printf("Invalid operation ") ; 
 return 0 ; 
}