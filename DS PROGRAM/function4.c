// C program to check whether a number can be expressed as sum of two prime numbers
#include <stdio.h>
int isPrime(int n)
{
    int i, isPrime = 1;
    if (n == 0 || n == 1) {
        isPrime = 0;
    }
    else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    return isPrime;
}
int main()
{
    int n = 7, i, flag = 0;

    for (i = 2; i <= n / 2; ++i) {
        if (isPrime(i) == 1) {
            if (isPrime(n - i) == 1) {
                printf("Yes\n");
                return 0;
            }
        }
    }

    printf("No\n");
    return 0;
}
