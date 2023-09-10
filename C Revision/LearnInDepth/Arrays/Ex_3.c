#include <stdio.h> 
int main() 
{
    int r , c ; 
    printf("Enter rows and coloumns of matrix : \n") ; 
    scanf("%d %d",&r,&c) ; 
    int m [r][c] , t [c] [r] ; 
    printf("Enter the element of matrix \n") ; 
    for(int i = 0 ; i < r ; i ++ )
    {
        for (int j = 0 ; j < c ; j++ )
        {
            printf("Enter element a%d%d : ",i+1,j+1) ; 
            scanf(" %d",&m[i][j]) ; 
            t[j][i] = m[i][j] ; 
        }
    }
    printf("Transpose of matrix : \n") ; 
     for(int i = 0 ; i < c ; i ++ )
    {
        for (int j = 0 ; j < r ; j++ )
        {
            printf("%d ",t[i][j]) ; 
        }
        printf("\n") ; 
    }   
    return 0 ; 
}