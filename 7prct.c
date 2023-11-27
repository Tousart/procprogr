#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int count = 0;

void pars(int *res)
{
    for(int i = 0; i<(N-1); i++)
    {
        if ((res[i] > 0 && res[i+1] < 0) || (res[i] < 0 && res[i+1] > 0))
        {
            count += 1;
        }
    }
}

int main()
{
    int i, *res;
    srand(time(NULL));
    res = (int*)malloc(N*sizeof(int));
    printf("Массив:\n");
    for(i = 0; i<N; i++)
    {
        res[i] = rand() % 101 - 50;
        printf("%d ", res[i]);
    }
    pars(res);
    printf("\nКоличество пар: %d", count);
    free(res);
    return 0;
}
