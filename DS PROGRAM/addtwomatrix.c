// C program to implement
// the above approach
#include <stdio.h>
#define N 4
void add(int A[][N], int B[][N], int C[][N])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            C[i][j] = A[i][j] + B[i][j];
}
void printmatrix(int D[][N])
{
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%d ", D[i][j]);
        printf("\n");
    }
}
int main()
{
    int A[N][N] = { { 1, 1, 1, 1 },
                    { 2, 2, 2, 2 },
                    { 3, 3, 3, 3 },
                    { 4, 4, 4, 4 } };

    int B[N][N] = { { 1, 1, 1, 1 },
                    { 2, 2, 2, 2 },
                    { 3, 3, 3, 3 },
                    { 4, 4, 4, 4 } };
    int C[N][N];
    int i, j;

    printf("Matrix A is \n");
    printmatrix(A);

    printf("Matrix B is \n");
    printmatrix(B);

    add(A, B, C);

    printf("Result matrix is \n");
    printmatrix(C);

    return 0;
}
