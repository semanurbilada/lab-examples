// Not ortalama hesaplama programı (vize - final)
// Modified with 'double' + 'label' from exp1.

// Because teacher's and other's compilers didn't accept it.
// (in Xcode, it worked without double; but, in DevC++ didn't work!)

#include <stdio.h>
int main( )
{
    int vize, final;
    double ortalama;
    char ans;
    
begin:
    
    printf("Notlarınızı giriniz:\nVize:  Final:  ");
    scanf("%d %d", &vize, &final);
    
    ortalama = vize*0.4 + final*0.6;
    
    if(vize<=0 || final<=0)
    {
        printf("Hatalı değer girdiniz!");
        goto begin;
    }
    
    else
    {
        if(ortalama>=90)
            printf("Not ortalamanız AA  ;) ");
        
            else if(ortalama>=85)
                printf("Not ortalamanız BA  ;) ");
        
            else if(ortalama>=80)
                printf("Not ortalamanız BB  :') ");
        
            else if(ortalama>=75)
                printf("Not ortalamanız CB  :') ");
        
            else if(ortalama>=70)
                printf("Not ortalamanız CC  :) ");
        
            else if(ortalama>=65)
                printf("Not ortalamanız DC  :( ");
        
            else if(ortalama>=60)
                printf("Not ortalamanız DD  :( ");
        
            else if(ortalama>=50)
                printf("Not ortalamanız FF  :( ");
        
            printf("\n\nDo you want to continue: ( Y / N )  ");
            scanf("%s", &ans);
        
            while(ans=='Y' || ans=='y') {
                goto begin;
            }
    }
}  // main
