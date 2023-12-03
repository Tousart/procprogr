#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void change(char *s, char elem, int *a)
{
    int count;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == elem) 
        {
        s[i] = toupper(s[i]);
        count += 1;
        }
        printf("%c", s[i]);
    }
    *a = count;
}

int main()
{
    char elem, *s;
    int i, a;
    void (*pointer)(char *s, char elem, int *a);
    s = (char*)calloc(5, sizeof(char));
    printf("Введите строку: ");
    gets(s);
    printf("\nВведите элемент: ");
    scanf("%c", &elem);
    printf("Получившаяся строка: ");
    pointer = change;
    pointer(s, elem, &a);
    printf("\nКоличество замен: %d", a);
    return 0;
}
