#include <stdio.h>
#include <stdlib.h>

char *mx_strnew(const int size)
{
    if (0 >= size)
    {
        return NULL;
    }

    char *str = (char *)malloc(size + 1);

    if (str != NULL)
    {
        for (int i = 0; i <= size; i++) {
            str[i] = '\0';
        }
    }

    return str;
}
