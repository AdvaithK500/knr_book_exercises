#include <stdio.h>

// Exercise 1-8

int main()
{
    int c;
    int n_spaces = 0;
    int n_tabs = 0;
    int n_lines = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ') {
            n_spaces++;
        } else if (c == '\t')
        {
            n_tabs++;
        } else if (c == '\n')
        {
            n_lines++;
        }
    }

    printf("spaces, tabs, lines: %d\t%d\t%d\n", n_spaces, n_tabs, n_lines);
    return 0;
}
