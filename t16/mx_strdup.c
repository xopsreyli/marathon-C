#include <stdio.h>

int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);

char *mx_strdup(const char *str)
{
    int length = mx_strlen(str);
    char *dst = mx_strnew(length);

    if (dst != NULL)
    {
        mx_strcpy(dst, str);
        return dst;
    }

    return NULL;
}
