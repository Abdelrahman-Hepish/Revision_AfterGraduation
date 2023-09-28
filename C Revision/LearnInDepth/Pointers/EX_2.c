#include <stdio.h> 
int main () 
{
    char *ptr = "ABCDEFGHKLMNOPQRSTUVWXYZ" ; 
    while(*ptr != '\0' ) 
    {
        printf("%c - ",*ptr) ; 
        ptr ++ ; 
    }
    return 0 ; 
}