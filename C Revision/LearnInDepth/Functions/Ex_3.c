#include <stdio.h> 
void reverse(char * str ,int n )
{
    if(n == 0 ) 
        return ; 
    printf("%c",str[n-1]) ; 
    return reverse(str,n-1) ; 
}
int main () 
{
    char str [] = "Hello" ; 
    reverse(str,5) ; 
    return 0 ; 
}