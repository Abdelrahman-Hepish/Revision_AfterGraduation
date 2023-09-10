#include <stdio.h> 
int main() 
{
    int s ; 
    printf("Enter the number of data : ") ; 
    scanf("%d",&s) ; 
    float arr[s] , sum = 0 ; 
    for(int i = 0 ; i < s ; i ++ )
    {
        printf("%d. Enter number : ",i+1) ; 
        scanf(" %f",&arr[i]) ; 
        sum += arr[i] ; 
    }
    printf("Average : %f",sum/s) ; 
    return 0 ; 
}