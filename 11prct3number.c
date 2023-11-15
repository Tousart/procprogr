#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define m 4
#define n 4

int main()
{
    int **mat, i, j, min_i, min_j, min = 999, first;
    mat = (int**)malloc(m*sizeof(int*));
    srand(time(NULL));
    printf("матрица:");
    for (i = 0; i < m; i++)
    {
        printf("\n");
        mat[i] = (int*)malloc(n*sizeof(int));
        for(int j = 0; j < n; j++)
        {
            mat[i][j] = rand() % 10;
            first = mat[0][0];
            if (mat[i][j] < min)
            {
                min = mat[i][j];
                min_i = i;
                min_j = j;
            }
            printf("%4d", mat[i][j]);
        }
    }
    printf("\nМинимальный элемент: %d", min);
    printf("\nПервый элемент: %d", first);
    mat[0][0] = min;
    mat[min_i][min_j] = first;
    printf("\nИтоговая матрица (ответ):");
    for (i = 0; i < m; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
        {
            printf("%4d", mat[i][j]);
        }
    }
    return 0;
}
