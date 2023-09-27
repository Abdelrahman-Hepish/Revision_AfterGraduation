#include <stdio.h>
union job
{
    char name [32] ; 
    float salary ; 
    int work_n ; 
};
struct job1
{
    char name [32] ; 
    float salary ; 
    int work_n ; 
};

int main()
{
    union job u ; 
    struct job1 s ; 
    printf("Size of union  : %d\n",sizeof(u)) ; 
    printf("Size of struct : %d",sizeof(s)) ; 
    
    return 0 ; 
}