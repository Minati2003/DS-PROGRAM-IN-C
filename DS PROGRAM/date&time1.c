// C program to demonstrate the  working of strftime()
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#define Size 50
 
int main ()
{
    time_t t ;
    struct tm *tmp ;
    char MY_TIME[Size];
    time( &t );
     
    tmp = localtime( &t );
    strftime(MY_TIME, sizeof(MY_TIME), "%x - %I:%M%p", tmp);
     
    printf("Formatted date & time : %s\n", MY_TIME );
    return(0);
}