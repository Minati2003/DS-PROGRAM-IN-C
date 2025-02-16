#include <stdio.h>
#include <string.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[n];
    memcpy(arr2, arr1, n * sizeof(arr1[0]));

    for (int i = 0; i < n; i++)
        printf("%d ", arr2[i]);
    return 0;
}