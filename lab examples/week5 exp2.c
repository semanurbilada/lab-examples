// İnputla birlikte;
// fibonacchi açılımı yap. (input 7 ise output 0 1 1 2 3 5 8 13 21... - 8.terimi yediye eşittir. yazdır.)

#include <stdio.h>
int main( )
{
    int i, num, term1=0, term2=1, nextTerm = 0;
    
    printf("Enter the number you want to open: ");
    scanf("%d", &num);
    
    printf("\nFibonachi dizisi: \n");
    
    for(i=0; i<=num; i++)
    {
        printf("%d ", term1);
        
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
    }
} // main
