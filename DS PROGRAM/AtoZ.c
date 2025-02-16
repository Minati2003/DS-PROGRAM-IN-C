// Alphabets from (A to Z) and (a to z) using while loop
 
#include <stdio.h>
 int main()
{
    char i;
    printf("The Alphabets from A to Z are: \n");
    i = 'A';
 
    while (i <= 'Z') {
        printf("%c ", i);
        i++;
    }
    printf("\nThe Alphabets from a to z are: \n");
 
    i = 'a';
 
    while (i <= 'z') {
        printf("%c ", i);
        i++;
    }
 
    return 0;
}
 