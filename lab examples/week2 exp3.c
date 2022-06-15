// Lab: 3 haklı şifre sorma programı
// Hoca tarafından soruldu! (Anlık olarak çalışıyor.)

// Bu kod taslak ancak geliştirilerek çok daha iyi hâle getirilebilir.

//                             LOGIC ERROR


#include <stdio.h>
int main( )
{
    int password, entry=3;

begin:
    
    printf("Enter password, please:\n");
    scanf("%d", &password);
    
    if(password==1809)
        printf("Congrats...\nYou logged in!\n");
    
    else if(password!=1809)
        printf("Password is wrong...");
           
    entry+=1;
    if(password!=1809)
        printf("Enter again:");
        scanf("%d", &password);
                
    entry+=1;
    if(password!=1809)
        printf("Enter again:");
        scanf("%d", &password);
                    
    entry+=1;
    if(password!=1809)
        printf("Enter again:");
        scanf("%d", &password);
        printf("Hakkınız bitti!");
    
    goto begin;
}
