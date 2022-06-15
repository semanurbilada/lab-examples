// faktöriyel:

#include <stdio.h>
main()
{
    int ans, sayi, i, sonuc;
    sonuc=1;
start:
    printf("Faktöriyeli Alınacak Sayı>> ");
    scanf("%d", &sayi);
    
    if(sayi>=0)
    {
        for(i=1; i<=sayi; i++)
            sonuc=sonuc*i;  // ÇOK ÖNEMLİİİİ !!!
        
        printf("%d Sayının faktoriyeli\n", sonuc);
        getchar();
             goto start;
    }
    else
    {
        printf("Wrond digit... Try again!\n");
             goto start;
