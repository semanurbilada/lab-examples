// Lab C - Functions;  (faktöriyel hesabı)

#include <stdio.h>
int fact(int n)
{
    int i, result = 1;
    for(i=1; i<=n; i++) {
        result *= i;
    }
    return result;
}
int main( void )
{
    int number, result;
    
    printf("Enter the number:\t");
    scanf("%d", &number);
    
    result = fact(number);
    printf("Faktöriyel değeri %d\n", result);
    
} // main
