// Lab fonksiyonlar ve array:
// Fonksiyon (karesini alan) kullanarak array'le liste oluşturmak.

#include <stdio.h>
int square(int a)
{
    int x;
    x = a*a;  // burası da değişmeli!
    
    return x;
}
int main( )
{
    int i, num, array[9];
    //int array[] = {1,2};
    
    printf("Enter a number for the size of array:\t");
    scanf("%d", &num);
    
    if(num>=9)
    {
        printf("Wrong digit...Enter a lowest number!\n");
    }
    else
    {
        for(i=0; i<num; i++)
        {
            array[i] = square(i);  //array gönderip array almak için değiştirilmeli. array[i]=i
            
            printf("%d\t", array[i]);
        } //for
    } //else
} //main
