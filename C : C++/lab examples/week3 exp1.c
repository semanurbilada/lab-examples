// At the LAB
// Hava durumuna göre yorum, inputla birlikte.
// Amaç if - else if - else yapılarını kullanabilmek.
// Daha fazla geliştirilebilir ve debug edilebilir yanları var. (uğraşılırsa halledilir.)

#include <stdio.h>
int main( )
{
    float t1, t2;
    char ans;
    
    printf("Enter the first and second tempature:\n");
    scanf("%f %f", &t1, &t2);
    
    if (t1>=30)
    {
        printf("Is the weather cloudly or not? (Y / N)");
        scanf("%s", &ans);
        
        if (ans=='Y' || ans=='y') {
            printf("The weather is average...\n");
        }
        else if (ans=='N' || ans=='n') {
            printf("The weather is hot...\n");
            scanf("%s", &ans);
        }
    } // if
    else {
        printf("The weather is kinda okay...\n");
        scanf("%f", &t1);
    } // else
    
    if (t1<=30 && t2>=10) {
        printf("Is the weather rainy or cold? (R / C)");
        scanf("%s", &ans);
        if (ans=='R' || ans=='r') {
            printf("Bring an umbrella!\n");
        }
    }
} // main
