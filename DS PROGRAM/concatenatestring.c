#include <stdio.h>

void concat(char *s1, char *s2) {
    int i = 0;
  
    while (s1[i] != '\0')
        i++;

    int j = 0;
    while (s2[j] != '\0') {
        s1[i] = s2[j];  
        i++;
        j++;
    }

    s1[i] = '\0';
}

int main() {
    char s1[50] = "Hello ";
    char s2[] = "Geeks";

    concat(s1, s2);

    printf("%s", s1);
    return 0;
}
