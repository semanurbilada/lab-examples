/*
Write the C Program codes that converts the amount of Money entered by the user in “Kuruş” 25, 5 and 1 Krş.
Screen View: Amount of money (Kurus): 44
1 --> 25 Kurus
3--> 5 Kurus
4--> 1 Kurus
 */


// HATALI OLDUĞU SAYILAR VAAAARRRR !!!!! 10 - 12 100 gibi...

#include <stdio.h>
main( )
{
    float num, num2, num3;
    int  yirmibes, bes, bir;
    
    printf("Enter amount of money in terms of kuruş: ");
    scanf("%f", &num);
    
    if (num>0 && num<=1000)
    {
        // kaç tane kullanılacağını hesaplamak için:
        yirmibes = num/25;
        
        num2 = num - 25; //kalan sayı
        
        // kaç tane kullanılacağını hesaplamak için:
        bes = num2/5;
        
        num3 = num2 - (5*bes); //kalan sayı
        
        // kaç tane kullanılacağını hesaplamak için:
        bir = num3/1;
        
        printf("%d tane 25kr gerekli ", yirmibes);
        printf("\n%d tane 5kr gerekli ", bes);
        printf("\n%d tane 1kr gerekli\n", bir);
    } //if
    
    else
    {
        printf("Wrong digit...\nEnter a positive or proper digit.\n");
    }  //else
} //main
