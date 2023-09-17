#include <unistd.h>

int mx_strlen(const char *s);

void mx_printstr(const char *s)
{
    int length = mx_strlen(s);
    int fd = 1;

    write(fd, s, length);
}
