// C program to demonstrate setdate() method
#include <stdio.h>
#include <time.h>

int main() {
    struct tm new_time;
    time_t t = time(NULL);
    struct tm *current_time = localtime(&t);
    printf("System's current date: %02d/%02d/%04d\n",
           current_time->tm_mday,
           current_time->tm_mon + 1,
           current_time->tm_year + 1900);
    printf("Enter date (day month year):\n");
    scanf("%d %d %d", &new_time.tm_mday, &new_time.tm_mon, &new_time.tm_year);
    new_time.tm_mon -= 1; 
    new_time.tm_year -= 1900;
    printf("System's new date (dd/mm/yyyy): %02d/%02d/%04d\n",
           new_time.tm_mday,
           new_time.tm_mon + 1,
           new_time.tm_year + 1900);

    return 0;
}
