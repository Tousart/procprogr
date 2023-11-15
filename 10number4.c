#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n1 6
#define n2 5
#define m 8

int main()
    {
    int **x, **y, **z, i, j, s;
    srand(time(NULL));
    s = n1 + n2 + 2;
    x = (int**)malloc(n1 * sizeof(int*));
    y = (int**)malloc(n2 * sizeof(int*));
    z = (int**)calloc(s, sizeof(int*));
    for (i = 0; i < s; i++)
    {
        z[i] = (int*)calloc(m, sizeof(int));
        x[i] = (int*)malloc(m * sizeof(int));
        y[i] = (int*)malloc(m * sizeof(int));
        for (j = 0; j < m; j++)
        {
            x[i][j] = rand() % 10;
            y[i][j] = rand() % 10;
        }
    }
    printf("Массив x:");
    for (i = 0; i < n1; i++)
    {
        printf("\n");
        for (j = 0; j < m; j++)
        {
            printf("%4d", x[i][j]);
        }
    }
    printf("\n\nМассив y:");
    for (i = 0; i < n2; i++)
    {
        printf("\n");
        for (j = 0; j < m; j++)
        {
            printf("%4d", y[i][j]);
        }
    }
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < m; j++)
        {
            z[i][j] = x[i][j];
        }
    }
    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < m; j++)
        {
            z[n1][j] = 0;
            z[i + n1 + 2][j] = y[i][j];
        }
    }
    printf("\n\nМассив z:");
    for (i = 0; i < s; i++)
    {
        printf("\n");
        for (j = 0; j < m; j++)
        {
            printf("%4d", z[i][j]);
        }
    }
    return 0;
}
