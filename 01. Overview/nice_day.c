#include <stdio.h>

#define LINESIZE 100

int main()
{
    char c, line[LINESIZE];
    int i;

    printf("\nHi! what is your name?  ");
    for (i = 0; (c = getchar()) != '\n'; ++i)
    {
        line[i] = c;
    }

    line[i] = '\0';

    printf("\nnice to meet you ");

    for (i = 0; line[i] != '\0'; ++i)
    {
        putchar(line[i]);
    }

    printf("\nYour name backwards is ");
    while (i != 0)
    {
        putchar(line[--i]);
    }

    printf("\nHave a nice day");
    return 0;
}