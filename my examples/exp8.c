// Factorial calculation:
// Tabikide düzeltilmesi gereken bug'lar var ancak taslak haliyle bu.

#include <stdio.h>
int main()
{
    int num, i, result;
    char ans;
    result = 1;
    
start:
    
    printf("The number for the calculation:  ");
    scanf("%d", &num);
    
    if(num>=0)
    {
        for(i=1; i<=num; i++)
            result = result * i;  // ÇOK ÖNEMLİİİİ !!!
        
        printf("%d is the factorial.\n", result);
        getchar();
        
        printf("Do you want to continue: (Y/N) ");
        scanf("%c", &ans);
        
        if(ans=='Y' || ans=='y') {
            goto start;
        }
    }
    else
    {
        printf("Wrond digit... Try again!\n");
            goto start;
    }
}
