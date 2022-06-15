/*
 Write a C Program codes that find sum of the digits of the entered 3-digit number.
Screen View:
 Write a 3-digit number: 463
 Sum of digits is 13
*/
#include <stdio.h>
main( )
{
    int sayi, sayi2, sayi3, sum;
    int yüzler = 0 ,onlar = 0, birler;
    
    printf("3 basamaklı sayıyı giriniz: ");
    scanf("%d",&sayi);
    
    if(sayi>99 && sayi<=999)
    {
        //onlar ve birler basamağı için kalan bulmak:
        sayi2 = sayi % 100;  // onlar
        sayi3 = sayi2 % 10;  // birler
        
        // main hesaplamalar:
        yüzler = sayi/100;
        onlar = sayi2/10;
        birler = sayi3;
        
        sum = yüzler + onlar + birler;
        
        printf("\n%d : Yüzler basamağı\n", yüzler);
        printf("%d : Onlar basamağı\n", onlar);
        printf("%d : Birler basamağı\n", birler);
        printf("\n%d : Toplamı\n\n", sum);
    } // if
    else
    {
        printf("Yanlış sayı girildi...\n");
    } // else
} //main
