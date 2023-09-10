#include <stdio.h> 
int main() 
{
    int s , e , p = -1 ; 
    printf("Enter number of elements : ") ;
    scanf("%d",&s) ; 
    int a[s] ; 
    for(int i = 0 ; i < s ; i++ ) scanf(" %d",&a[i]) ; 
    printf("Enter the number to be searched : ") ; 
    scanf(" %d",&e) ; 
    for(int i = 0 ; i < s ; i++ )
    {
        if(a[i] == e) 
        {
            p = i ; 
            printf("Elemen found at location : %d ",i+1) ; 
        }
    }
    if ( p == -1 )
        printf("Element not found ") ; 
    return 0 ; 
}