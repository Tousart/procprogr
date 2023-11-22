#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 5

int *sortik(int *arr)
{
    int i, j, min, ind;
    for (i = 0; i < n; i++)
    {
        min = 999;
        for (j = i; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                ind = j;
            }
        }
        arr[ind] = arr[i];
        arr[i] = min;
    }
    return arr;
}

int main()
{
    int *arr, i;
    srand(time(NULL));
    arr = (int*)malloc(n*sizeof(int));
    printf("Массив:\n");
    for (i = 0; i < n; i++)
    {
        arr[i] = rand() % 10;
        printf("%d ", arr[i]);
    }
    printf("\nОтсортированный массив (выбором):\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", sortik(arr)[i]);
    }
    return 0;
}
