#include <stdio.h> 
int main () 
{
    char str [100] ; 
    int len = 0 ; 
    printf("Enter a string : ") ; 
    gets(str) ; 
    for (int i =0 ; str[i] != '\0' ;i++)
    {
        len ++ ; 
    }
    printf("len of %s : %d ",str,len) ; 
    return 0 ; 
}