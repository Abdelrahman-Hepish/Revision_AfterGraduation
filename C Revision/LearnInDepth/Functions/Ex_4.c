    #include <stdio.h> 
    int power(int base , int p)
    {
        if(p == 0 )
            return 1 ; 
        return base * power (base , p - 1 ) ; 
    }
    int main () 
    {
        int b , p ; 
        printf("Enter base number : ") ; 
        scanf("%d",&b)  ;
        printf("Enter power number : ") ; 
        scanf(" %d",&p) ; 
        printf("%d^%d = %d",b,p,power(b,p)) ; 
        return 0 ; 
    }