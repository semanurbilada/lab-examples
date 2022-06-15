// C Programming - Lab
// Lokal değişkenler (local variables) /n1=10 or n2=3
// Sonucun float şeklinde gelmesi için double eklenmiştir.

#include <stdio.h>
int main( )
{
    int n1=10, n2=3;
    double x;
    
    x = (double)n1 / n2;
    
    printf("%2f\n", x);
}
