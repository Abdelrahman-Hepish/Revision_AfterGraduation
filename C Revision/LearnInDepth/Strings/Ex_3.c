#include <stdio.h> 
#include <string.h>
int main () 
{
    char str [100] , rev [100] ; 
    printf("Enter the string : ") ; 
    gets(str) ; 
    for(int i = strlen(str) - 1 , j = 0 ; i >= 0 ; i-- , j ++ )
    {
        rev[j] = str[i] ; 
        if(i == 0 ) rev[j+1] = '\0' ; 
    }
    printf("Reversed : %s",rev) ; 
    return 0 ; 
}