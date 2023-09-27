#include <stdio.h>
typedef struct 
{
    char name[50] ; 
    int roll_number ; 
    float marks ; 
}S_Student_t;
void ScanStudentInfo(S_Student_t * s ) ; 
void PrintStudentInfo(S_Student_t * s ) ; 
int main()
{
    S_Student_t s ; 
    ScanStudentInfo(&s) ; 
    PrintStudentInfo(&s) ; 
    return 0 ; 
}
void ScanStudentInfo(S_Student_t * s ) 
{
    printf("Enter student name : ") ; 
    scanf("%s",&s->name) ; 
    printf("Enter student roll number : ") ; 
    scanf(" %d",&s->roll_number) ; 
    printf("Enter student marks : ") ; 
    scanf(" %f",&s->marks) ;         
}
void PrintStudentInfo(S_Student_t * s ) 
{
    printf("Student name : %s\n",s->name) ; 
    printf("Student roll number : %d\n",s->roll_number) ; 
    printf("Student marks : %f\n",s->marks) ;         
} 