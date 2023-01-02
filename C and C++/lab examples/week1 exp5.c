// C Programming - Lab
// Same version and same output as exp4 but with another define definition.

#include <stdio.h>
#define PI 3.14      // constant definiton
#define yaz printf   // modifiye edebiliyorsun -> printf = yaz

int main( )
{
    float r;
    yaz("Radius = ");
    scanf("%f", &r);
    
    yaz("Result = %2f\n", PI*r*r);
}
