#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            printf("  ");
        for (int k = 1; k <= i; k++) {
            if (k == 1 || k == i || i == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
