#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctupe.h>

void change(char *s, char elem, int *count)
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == elem) s[i] = toupper(s[i]);
        printf("%c", s[i]);
    }
    
}

int main()
{
    char elem, *s;
    void (*pointer)(char *s, char elem, int *count);
    int count = 0, i;
    s = (char*)calloc(5, sizeof(char));
    printf("Введите строку: ");
    gets(s);
    printf("\nВведите элемент: ");
    scanf("%c", &elem);
    printf("\n");
    pointer = change;
    pointer(s, elem, &count);
    return 0;
}
