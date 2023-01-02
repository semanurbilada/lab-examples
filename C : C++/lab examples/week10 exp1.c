// Lab C - Functions;
// Önce karekök fonksiyonu yazıldı
// Sonra 'pass by pointer' eklendi!

#include <stdio.h>
int calculate(int n)
{
    int end = (n*n*n);
    printf("%d", end);
    
    return n;
}
int main( )
{
    int number;
    
    printf("Enter a number for calculation:\t");
    scanf("%d", &number);
    
    int *end = &number;
    
    calculate(*end);
}
