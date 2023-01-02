// Diğer tarafa yaslı dik üçgen yazdırma. (içi yıldız dolu)
// İnputla birlikte.

#include <stdio.h>
main( )
{
    int i, j, k, rows;
    
    printf("Enter the number of rows:");
    scanf("%d", &rows);
    
    for(i=1; i<=rows; i++)
    {
        for(j=rows; j>=i; j--)  // sondan azalıyor
            printf(" ");
        {
            for(k=1; k<=i; k++)  // k<=i farkı.
                printf("*");
        }
        printf("\n");
    }
} // main

