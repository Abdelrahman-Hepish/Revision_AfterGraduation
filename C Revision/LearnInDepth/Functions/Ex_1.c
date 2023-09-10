#include <stdio.h> 
char isPrime(int n ) 
{
    if(n < 2  ) return 0 ; 
    char ret = 1 ; 
    for(int i = 2 ;i*i <= n ; i++ )
    {
        if(n %i == 0 ) 
        ret =  0 ; 
    }
    return ret ; 
}
int main () 
{
    int l , r ; 
    printf("Enter the start and end of the interval : ") ; 
    scanf("%d %d",&l,&r) ; 
    for(int i = l ; i <= r ; i++ )
    {
        if(isPrime(i)) printf("%d ", i) ; 
    }
    return 0 ; 
}