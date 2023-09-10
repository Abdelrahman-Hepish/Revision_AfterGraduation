#include <stdio.h> 
int main () 
{
    char str [100] , c ; 
    int cnt = 0 ; 
    printf("Enter a string : ") ; 
    gets(str) ; 
    printf("Enter a character to find frequenc : ") ; 
    scanf(" %c",&c) ; 
    for (int i =0 ; str[i] != '\0' ;i++)
    {
        if(str[i] == c ) cnt ++ ; 
    }
    printf("Frequency of %c : %d ",c,cnt) ; 
    return 0 ; 
}