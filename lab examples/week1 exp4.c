// C Programming - Lab
// Find the area of a circle.

#include <stdio.h>
#define PI 3.14   //constant olarak tanımlandı
int main( )
{
    float r;   //int, float -> 4 byte = 32 bit hafızada yer kaplar
    
    printf("Radius = ");
    scanf("%f", &r);
    
    printf("Result = %2f\n", PI*r*r);
}
