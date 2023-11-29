#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void change(char *s, char elem, int count, int *a)
{
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
    void (*pointer)(char *s, char elem, int count, int *a);
    int count = 0, i, a = 0;
    s = (char*)calloc(5, sizeof(char));
    printf("Введите строку: ");
    gets(s);
    printf("\nВведите элемент: ");
    scanf("%c", &elem);
    pointer = change;
    pointer(s, elem, count, &a);
    printf("\nКоличество замен: %d", a);
    return 0;
}
