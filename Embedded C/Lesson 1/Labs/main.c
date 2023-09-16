#include <stdio.h> 
#include "t.h"
#include "a.h"
#include "b.h" 
int main() 
{
	T_c l ; 
	l.i = 5 ; 
	F_A(l) ; 
	F_B(l) ; 
	return 0 ; 
} 
void F_B(T_c t) 
{
	printf("Function B : %d \n",t.i) ; 
}

void F_A(T_c t) 
{
	printf("Function A : %d \n",t.i) ; 
}