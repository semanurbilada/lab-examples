// İçi dolu baklava dilimi:
// exp2'den modifye edilerek yazıldı, it works!!!!
#include <stdio.h>
int main( void )
{
    int i, j, k, rows;
    
    printf("Enter the number of rows:");
    scanf("%d", &rows);
    
    for(i=1; i<=rows; i++)
    {
        for(j=rows; j>=i; j--)  // sondan azalıyor
            printf(" ");
        {
            for(k=1; k<=i*2-1; k++)  // k<=i*2-1 farkı.
                printf("*");
        }
        printf("\n");
    }
    for(i=rows; i>=1; i--)
    {
        for(j=i; j<=rows; j++)
            printf(" ");
        {
            for(k=1; k<=i*2-1; k++)
                printf("*");
        }
        printf("\n");
    }
} // main
