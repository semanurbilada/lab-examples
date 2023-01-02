// 100'den geriye 7'şer 7'şer:
// (Kod bu şekilde çalışmaz ancak aynı örneği örneği pratik olsun diye aynı dosyada birleştirdim.)

// while
#include <stdio.h>
int main(void)
{
    int counter = 100;
    while(counter>=1) {
        counter -= 7;
        printf("%d\n", counter);
    }
} // main

//********************************************************

// do...while
#include <stdio.h>
int main(void)
{
    int counter = 100;
    do {
        counter -= 7;
        printf("%d\n", counter);
    } while(counter >= 1);
} // main

//********************************************************

// for loop
#include <stdio.h>
int main(void)
{
    for(int counter=100; counter>=1; counter-=7)
        printf("%d\n", counter);
} // main
