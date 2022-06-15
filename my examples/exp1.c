// Tersten yıldız şeması
// BJK gibi 1'den fazla harfleri yazdırırken ortadan yazdırıyor.
// yıldız gibi tek harflilerde sıkıntı olmuyor.

#include <stdio.h>
main( )
{
    int i, j, k;
    
    for(i=1; i<=10; i++)
    {
        for(j=10; j>=i; j--)
            printf(" ");
        {
            for(k=1; k<=i; k++)
                printf("*");
        }
        printf("\n");
    }

} // main
