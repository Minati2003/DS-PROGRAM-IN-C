// C program to illustrate the gmtime() function
#include <stdio.h>
#include <time.h>

int main() {
    time_t current_time;
    time(&current_time);
    struct tm *local_time = localtime(&current_time);
    struct tm *gmt_time = gmtime(&current_time);
    printf("Local time: %02d/%02d/%04d %02d:%02d:%02d\n",
           local_time->tm_mday, 
           local_time->tm_mon + 1, 
           local_time->tm_year + 1900, 
           local_time->tm_hour,
           local_time->tm_min,
           local_time->tm_sec);
    printf("GMT time: %02d/%02d/%04d %02d:%02d:%02d\n",
           gmt_time->tm_mday, 
           gmt_time->tm_mon + 1, 
           gmt_time->tm_year + 1900, 
           gmt_time->tm_hour,
           gmt_time->tm_min,
           gmt_time->tm_sec);

    return 0;
}
