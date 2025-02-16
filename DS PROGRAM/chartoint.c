// C program to convert the given char to int using ASCII values
#include <stdio.h>

int main() {
    char ch = '7';
    int N = ch - '0';
    printf("The integer value of character '%c' is %d\n", ch, N);

    return 0;
}
