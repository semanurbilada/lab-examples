// Çarpım tablosu (1'den 10'a)

#include <stdio.h>
int main( )
{
    int i,j;
    
    for(j=1; j<=10; j++) {
        for(i=1; i<=10; i++) {
            printf("%d x %d = %d\n", j,i, j*i);
        }
        
        // her döngüde araya boşluk koymak için:
        printf("\n");
    }
} // main
