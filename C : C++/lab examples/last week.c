// Lab son hafta telafi dersi için:

/*   output:
 
*****
 ***
  *
  *
 ***
*****
 
*/
#include <stdio.h>
int main( )
{
    int i, j, k;
    
    for(i=3; i>=1; i--)
    {
        for(j=i; j<=3; j++)
            printf(" ");
        {
            for(k=1; k<=i*2-1; k++)
                printf("*");
        }
        printf("\n");
    }
    for(i=1; i<=3; i++)
    {
        for(j=3; j>=i; j--)  // sondan azalıyor
            printf(" ");
        {
            for(k=1; k<=i*2-1; k++)  // k<=i*2-1 farkı.
                printf("*");
        }
        printf("\n");
    }
} //main
