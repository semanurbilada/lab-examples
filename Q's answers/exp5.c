//Develop a C program that calculates the surface area of a cone.
//  A = pi*r*r + pi*r*L

#include <stdio.h>
int main( )
{
    int r, L;
    float area, pi=3.14;
    char ans;
    
begin:
    printf("---Calculation of the Surface Area of a Cone---\n");
    
    printf("\nEnter the radius of the cone: ");
    scanf("%d", &r);
    
    if(r==0)
    {
        printf("Wrong digit...Try again!\n\n");
        goto begin;
    }
    else
    {
        printf("Enter the lenght of the cone: ");
        scanf("%d", &L);
        
        if(L==0)
        {
            printf("Wrong digit...Try again!\n\n");
            goto begin;
        }
        else
        {
            area = pi*r*r + pi*r*L;
            printf("\nArea: %f\n", area);
        }
        printf("Do you want to do another calculation: (Yes / No) ");
        scanf("%s", &ans);       // input alabilmek için %c'yi %s yapmam gerekti.
        
        while(ans=='Y' || ans=='y') {  // if kullanılabilir
            goto begin;
        }
    }
} // main
