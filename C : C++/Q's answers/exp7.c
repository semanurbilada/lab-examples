// inputa göre içi dolu dikdörtgen veya kare:

#include <stdio.h>
int main(void)
{
    int x, y, i, j;
    printf("Two numbers: \n");
    scanf("%d %d", &x, &y);
    
    for(i=1; i<=x; i++)
    {
        for(j=1; j<=y; j++)
        {
            printf("Q");
        }
        printf("\n");
    }
    return 0;
} // main
