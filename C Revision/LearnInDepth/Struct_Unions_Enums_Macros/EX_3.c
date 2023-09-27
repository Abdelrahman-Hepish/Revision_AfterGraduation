#include <stdio.h>
#define feet   real 
#define inch   imag
typedef struct 
{
    float feet ; 
    float inch ; 
}tCompNumS;
void ScanC_Number(tCompNumS *d) ; 
void SumOfNumbers(tCompNumS *d1 ,tCompNumS *d2) ; 
int main()
{
    tCompNumS n1 , n2 ; 
    ScanC_Number(&n1) ; 
    ScanC_Number(&n2) ; 
    SumOfNumbers(&n1 ,&n2) ; 
    return 0 ; 
}
void ScanC_Number(tCompNumS *d) 
{
    printf("Enter real : ") ; scanf("%f",&d->feet) ; 
    printf("Enter imag : ") ; scanf("%f",&d->inch) ; 
}
void SumOfNumbers(tCompNumS *d1 ,tCompNumS *d2) 
{
    tCompNumS res ; 
    res.feet = d1->feet + d2->feet ; 
    res.inch = d1->inch + d2->inch ;
    printf("Sum = %.1f+i%.1f",res.feet,res.inch) ;
}