#include <stdio.h> 
#include <string.h>
int main () 
{
    int arr [15] , size , i ; 
    scanf("%d",&size) ; 
    for(i = 0 ; i < size ; i++ ) scanf("%d",&arr[i]) ; 
    int *ptr = arr + size - 1 ; 
    while(ptr >= arr )
    {
        printf("%d\n",*ptr) ; ptr -- ; 
    }

    return 0 ; 
}