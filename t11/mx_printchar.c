#include <unistd.h>

void mx_printchar(char c)
{
    const int length = 1, fd = 1;

    write(fd, &c, length);
}
