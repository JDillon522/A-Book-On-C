#include <stdio.h>

int main()
{
     int c;

     while ((c = getchar()) != EOF)
    {
        if ('a' <= c && c <= 'z')
        {
            // c + 65 - 97
            // g = 103
            // G = 103(g) + 65(A) - 97(a)
            putchar(c + 'A' - 'a');
        }
        else if (c == '\n')
        {
            putchar('\n');
            putchar('\n');
        }
        else
        {
            putchar(c);
        }
    }

    return 0;
}