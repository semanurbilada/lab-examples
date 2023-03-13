// The main meaning of a function !!!
// (Fonksiyonun ne olduğuyla ilgili kısa bir örnek hazırlamıştım.)
// Sum of two number in function with input:

#include <stdio.h>
int funcSum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}
int main( )
{
    int n1, n2, sum;
    
    printf("Enter two numbers: \n");
    scanf("%d %d", &n1, &n2);
    
    sum = funcSum(n1, n2);
    printf("Sum = %d\n", sum);
    
    return 0;
}
