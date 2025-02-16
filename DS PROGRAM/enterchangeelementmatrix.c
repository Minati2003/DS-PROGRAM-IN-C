// C program interchange the elements 
// of first and last in a matrix 
// across rows.
#include <stdio.h>
#define n 3
void interchangeFirstLast(int m[][n])
{
    int rows = n;
    for (int i = 0; i < n; i++) 
    {
        int t = m[0][i];
        m[0][i] = m[rows - 1][i];
        m[rows - 1][i] = t;
    }
}
int main()
{
    int m[n][n] = {{6, 3, 1}, 
                   {4, 5, 2}, 
                   {2, 4, 9}};
    printf("Input Matrix: \n");
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    interchangeFirstLast(m);
    printf("\nOutput Matrix: \n");
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}