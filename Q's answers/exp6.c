// one of Q4's answers:
/*
 output:
 ****
 ****
 ****

 ****
 ****
 ****

 ****
 ****
 ****

 ****
 ****
 ****

 ****
 ****
 ****
 */

#include <stdio.h>
int main( )
{
    int i, j, k;
    
    for(i=1; i<=5; i++)  // kaç blok olacağı
    {
        for(j=1; j<=3; j++)  // 1 bloğun kaç column olacağı
        {
            for(k=1; k<=4; k++)  // 1 bloğun kaç row olacağı
                printf("*");
            printf("\n");
        } // for j
        printf("\n");
    } // for i
} // main

