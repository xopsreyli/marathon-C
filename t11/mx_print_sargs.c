void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);

int main(int argc, char *argv[])
{
    if (1 < argc)
    {
        for (int i = 1; i < argc; i++) {
            for (int j = i + 1; j < argc; j++) {
                int diff = mx_strcmp(argv[i], argv[j]);
                if (0 < diff)
                {
                    char *temp = argv[i];
                    argv[i] = argv[j];
                    argv[j] = temp;
                }
            }
        }

        for (int i = 1; i < argc; i++) {
            mx_printstr(argv[i]);
            mx_printchar('\n');
        }
    }

    return 0;
}
