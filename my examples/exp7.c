// İçi dolu paralel kenar:
// İnputla birlikte

#include <stdio.h>
main( )
{
    int row, column;
    // row = kısa kenar
    // column = uzun kenar
    
    printf("Enter the number of row: ");
    scanf("%d", &row);
    
    printf("Enter the number of column: ");
    scanf("%d", &column);
    
    for(int i=0; i<column; i++)
    {
        for(int j=0; j<i; j++)
        {
            printf(" ");
        }
        for(int k=0; k<row; k++)
        {
            printf("*");
        }
        printf("*\n");
    }
} // main
