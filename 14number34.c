#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void lalala(double *v1, double *v2, double *len, double *pr)
{
    double d1, d2, product;
    for (int i = 0; i < 3; i++)
    {
        d1 += pow(v1[i], 2);
        d2 += pow(v2[i], 2);
        product += (v1[i] * v2[i]);
    }
    d1 = sqrt(d1);
    d2 = sqrt(d2);
    if (d1 < d2)
    {
        *len = d2;
        *pr = (product / d2);
    }
    else
    {
        *len = d1;
        *pr = (product / d1);
    }
}

int main()
{
    double v1[3] = {1, 2, 3}, v2[3] = {3, 4, 5}, len, pr;
    void (*pointer)(double *v1, double *v2, double *len, double *pr);
    printf("Первый вектор: (");
    for (int i = 0; i < 3; i++)
    {
        if (i == 2) printf("%.0lf)", v1[i]);
        else printf("%.0lf, ", v1[i]);
    }
    printf("\nВторой вектор: (");
    for (int i = 0; i < 3; i++)
    {
        if (i == 2) printf("%.0lf)", v2[i]);
        else printf("%.0lf, ", v2[i]);
    }
    pointer = lalala;
    pointer(v1, v2, &len, &pr);
    printf("\nДлина наибольшего вектора: %.3lf;", len);
    printf("\nПроекция меньшего вектора на больший: %.3lf", pr);
    return 0;
}
