/*
 Write the C program codes that calculates the result considering the defined function. (a and b values are given by the user).
    -> Use the most fewer if - else if - else !!!
 
            Operation   Condition
             a*b        a>=0, b>=0
     f =     b/a        a>=0, b<0
             a+b        a>0, b>=0
             a-b        a<0, b<0
 */
#include <stdio.h>
main( )
{
    int a, b;
    
    printf("Enter a value that a and b:\n");
    scanf("%d %d", &a, &b);
    
    if(a>=0 && b>=0) {
        printf("Multiplication:\n");
        printf("%d", a*b);
    }
    
    else if(a<=0 && b<0) {
        printf("Divison:\n");
        printf("%d", a/b);
    }
    
    else if(a>0 && b>=0) {
        printf("Addition:\n");
        printf("%d", a+b);
    }
    
    else {
        printf("Substraction:\n");
        printf("%d", a-b);
    }
    
} // main
