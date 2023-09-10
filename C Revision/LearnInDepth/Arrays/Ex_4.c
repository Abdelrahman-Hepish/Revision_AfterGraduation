#include <stdio.h> 
int main() 
{
    int s , e , p ; 
    printf("Enter the number of elements : ") ; 
    scanf("%d",&s) ; 
    int a [s+1] ; 
    for(int i = 0 ; i < s ; i++ )
    {
        scanf(" %d",&a[i]) ; 
    }
    printf("Enter the element to be inserted : ") ; 
    scanf(" %d",&e) ; 
    printf("Enter the location : ") ; 
    scanf(" %d",&p) ; 
    for (int i = s ; i >= p ; i -- ) 
    {
        a[i] = a[i-1] ; 
    }
    a[p-1] = e ; 
    for (int i = 0 ; i <= s ; i ++ ) 
    {
        printf("%d ",a[i]) ; 
    }

    return 0 ; 
}