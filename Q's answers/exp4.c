/*
 Write the C program codes that calculates the amount of time entered by the user (in seconds) in hours, minutes and seconds.
 Screen View:
 Time (seconds): 3665
 1 hour
 1 minute
 5 seconds
 */
#include <stdio.h>
main( )
{
    int time, hour, minute, second;
    
    printf("Enter the amount of time in seconds: ");
    scanf("%d", &time);
    
    if(time>0 && time<=9999)
    {
        // main calculations.
        hour = time/3600;
        minute = (time%3600) / 60;  // time%3600 kalanı ifade etmek için:
        second = time%60;
        
        printf("%d hour\n", hour);
        printf("%d minutes\n", minute);
        printf("%d seconds\n", second);
        
    } // if
    else
    {
        printf("Wrong digit...\n");
    } // else
} // main
