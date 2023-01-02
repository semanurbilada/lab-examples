// Lab fonksiyonlar ve array:
// Array'den array alarak yeni bir array oluştur. (Fonksiyonla yapılacak!)
// exp2'den modifiye

#include <stdio.h>
int func(int array[])
{
    int i = 0, newArray[i];
    
    newArray[i] = array[i] * array[i];
    printf("%d ", newArray[i]);
    
    return array[i];
}
int main( )
{
    int i, num, array[100];
    
    printf("Enter a number for calculation:\t");
    scanf("%d", &num);
    
    if(num>100)
    {
        printf("Wrong digit...It's too big!\n");
    } //if
    
    else
    {
        for(i=0; i<num; i++)
        {
            array[i] = func(&i);
            //printf("%d\t", array[i]);
        } //for
    } //else
} //main
