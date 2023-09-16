#include <stdio.h> 
int main() 
{
    int arr[100] ; 
    printf("%u %u",&arr[0] , &arr[-2]) ; 
    return 0 ; 
}