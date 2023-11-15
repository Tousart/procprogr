#include <stdio.h>
#include <string.h>

int main()
{
    int i, number, count = 0, c1 = 0, c2 = 0;
    char *str;
    str = (char*)calloc(5, sizeof(char));
    printf("Введите строку: ");
    gets(str);
    printf("\nВведите номер слова: ");
    scanf("%d", &number);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            count += 1;
            if (count == number)
            {
                c1 = c2;
                c2 = i;
                break;
            }
            else c2 = i;
        }
    }
    printf("слово:\n");
    for (i = c1; i < c2; i++)
    {
        printf("%c", str[i]);
    }
    return 0;
}
