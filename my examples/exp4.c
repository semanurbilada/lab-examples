// içi boş ters dik üçgen
// (exp9 dan yazmaya çalışırken bu hale geldi.)

#include <stdio.h>
int main( )
{
    int i, j, num;
    
    printf("Enter the number of rows: ");
    scanf("%d", &num);
    
    for(i=1; i<=num; i++)
    {
        for(j=i; j<=num; j++)
        {
            if(i==1 || i==num || j==1 || j==num)
            {
                printf("*");
            } // if
            else
            {
                printf(" ");
            } // else
        } // for
        printf("\n");
    } // for
    return 0;
} // main
