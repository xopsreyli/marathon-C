#include <unistd.h>

void mx_printchar(char c);

void mx_print_alphabet()
{
    const int diff = 32;

    for (char i = 65; i <= 90; i++) {
        char letter;
        if (0 == i % 2) {
            letter = (char) (i + diff);
        } else {
            letter = (char) i;
        }

        mx_printchar(letter);
    }

    write(1, "\n", 1);
}
