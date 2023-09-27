#include <stdio.h>
typedef struct 
{
    int feet ; 
    float inch ; 
}tDistanceS;
void ScanDistance(tDistanceS *d) ; 
void SumOfDistances(tDistanceS *d1 ,tDistanceS *d2) ; 
int main()
{
    tDistanceS d1 , d2 ; 
    ScanDistance(&d1) ; 
    ScanDistance(&d2) ; 
    SumOfDistances(&d1 ,&d2) ; 
    return 0 ; 
}
void ScanDistance(tDistanceS *d) 
{
    printf("Enter Feet : ") ; scanf("%d",&d->feet) ; 
    printf("Enter Inches : ") ; scanf("%f",&d->inch) ; 
}
void SumOfDistances(tDistanceS *d1 ,tDistanceS *d2) 
{
    tDistanceS res ; 
    res.feet = d1->feet + d2->feet ; 
    res.inch = d1->inch + d2->inch ; 
    if(res.inch >= 12 ) 
    {
        res.feet += (((int)res.inch)/12) ; 
        res.inch  = (res.inch) - ((int)res.inch);
    }
    printf("Sum of distance : %d\"%.1f\"",res.feet,res.inch) ;
}