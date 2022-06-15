// Lab C - Functions;  (faktöriyel hesabı)

int fact(int n)
{
    int i, result = 1;
    for(i=1; i<=n; i++) {
        result *= i;
    }
    return result;
}
#include <stdio.h>
int main( void )
{
    int number, result;
    
    printf("Enter the number:\t");
    scanf("%d", &number);
    
    result = fact(number);
    printf("Faktöriyel değeri %d\n", result);
    
} // main
