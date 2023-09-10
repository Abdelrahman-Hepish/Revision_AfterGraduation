#include <stdio.h> 
int main() 
{
    float m1 [2] [2] , m2 [2][2] ; 
    printf("Enter the element of 1st matrix \n") ; 
    scanf("%f %f %f %f",&m1[0][0],&m1[0][1],&m1[1][0],&m1[1][1]) ; 
    printf("Enter the element of 2nd matrix \n") ; 
    scanf(" %f %f %f %f",&m2[0][0],&m2[0][1],&m2[1][0],&m2[1][1]) ; 
    printf("Sum of matrix \n") ; 
    for (int i = 0 ; i < 2 ; i++ )
    {
        for(int j = 0 ; j < 2 ; j ++)
        {
            m1[i][j] += m2[i][j] ; 
            printf("%f ",m1[i][j]) ; 
        }
        printf("\n") ; 
    }
    return 0 ; 
}