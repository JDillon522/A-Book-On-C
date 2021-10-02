#include <stdio.h>

int main()
{

    // char c;

    // while (1)
    // {
    //     c = getchar();
    //     putchar(c);
    //     putchar(c);
    // }

    int c;

    // ctl+c triggers an EOF. Interesting
    while ((c = getchar()) != EOF)
    {
        putchar(c);
        putchar(c);
    }
    return 0;
}