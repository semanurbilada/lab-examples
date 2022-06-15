// C Programming - Lab
// Separate the number into digits.

#include <stdio.h>
int main( )
{
    int n, y, o, b;
    
    printf("Enter a 3-digit number = ");
    scanf("%d", &n);
    
    y = n/100;
    o = (n- (y*100) ) / 10;
    b = n % 10;
    
    printf("%d\n", y);
    printf("%d\n", o);
    printf("%d\n", b);
}
