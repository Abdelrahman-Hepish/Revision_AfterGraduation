# 1 "main.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "main.c"
# 1 "can.h" 1


void WelcomCan(void) ;
# 2 "main.c" 2




int main()
{
 int x = 0 ;
 for(int i = 0 ; i <=31 ; i ++ )
 {
  (x = (x&(~(1<<i))) | (1 << i )) ;
  printf(" - 0x%x\n",x);
 }
    WelcomCan() ;
    return 0 ;
}
