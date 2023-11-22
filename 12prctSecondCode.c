#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str1, *str2, i;
    str1 = (char*)calloc(5, sizeof(char));
    str2 = (char*)calloc(5, sizeof(char));
    printf("Введите строку номер 1: ");
    gets(str1);
    printf("\nВведите строку номер 2: ");
    gets(str2);
    printf("\nИтоговая строка:\n");
    for (i = 0; i < strlen(str1); i++)
    {
        printf("%c", str1[i]);
    }
    for (i = 0; i < strlen(str2); i++)
    {
        printf("%c", str2[i]);
    }
}
