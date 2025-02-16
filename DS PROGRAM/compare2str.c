#include <stdio.h>
#include <string.h>
int comp(char *s1, char *s2) {
    while (*s1 && !(*s1 - *s2)) {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

int main() {
    char s1[] = "Hello";
    char s2[] = "Hello";
    if(!comp(s1, s2))
        printf("Equal");
    else
        printf("Not Equal");

    return 0;
}
