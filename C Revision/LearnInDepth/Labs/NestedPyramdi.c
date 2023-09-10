#include <stdio.h>
int main()
{
    for(int i = 0 ; i <= 9 ; i++ )
    {
        for (int j = i ; j <= 9 ; j++ )
        {
            printf("%d ",j) ; 
        }
        printf("\n") ; 
    }
}