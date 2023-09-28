#include <stdio.h> 
int main () 
{
    int  m = 29 ; 
    printf("Address of m : %p\nValue of m : %d\n",&m,m) ; 
    int *ab = &m ; 
    printf("Address that ab points to : %p\nValue inside that address : %d\n",ab,*ab) ; 
    m = 34 ; 
    printf("Address that ab points to : %p\nValue inside that address : %d\n",ab,*ab) ; 
    *ab = 7 ; 
    printf("Address of m : %p\nValue of m : %d\n",&m,m) ; 
    return 0 ; 
}