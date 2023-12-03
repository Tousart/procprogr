#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 20

void answer(int *arr, int param, int *odd, int *krat)
{
    int i, count1 = 0, count2 = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0) count1++;
        if (arr[i] % param == 0) count2 ++;
    }
    *odd = count1;
    *krat = count2;
}

int main()
{
    int i, *arr, param, odd, krat;
    void (*pointer)(int *arr, int param, int *odd, int *krat);
    arr = (int*)calloc(n, sizeof(int));
    srand(time(NULL));
    printf("Массив чисел: ");
    for (i = 0; i < n; i++)
    {
        arr[i] = rand() % 10;
        printf("%3d", arr[i]);
    }
    printf("\nВведите параметр: ");
    scanf("%d", &param);
    pointer = answer;
    pointer(arr, param, &odd, &krat);
    printf("\nКоличество нечетных: %d", odd);
    printf("\nКоличество кратных параметру: %d", krat);
    free(arr);
    return 0;
}
