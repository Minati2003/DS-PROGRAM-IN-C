#include <stdio.h>
#include <string.h>
void print(char *s) {
    int first = 1;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ' && first) {
            printf("%c ", s[i]);
            first = 0;        
        }
        if (s[i] == ' ')
            first = 1;
    }
}

int main() {
    char s[] = "Hello Geeks. Welcome to C programming";
    print(s);
    return 0;
}
