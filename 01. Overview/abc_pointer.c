#include <stdio.h>

int main()
{
    char c = 'A', *p, s[100], *stcpy();

    p = &c;
    printf("\n%c%c%c", *p, *p+1, *p+2);
    s[0] = 'A';
    s[1] = 'B';
    s[2] = 'C';
    s[3] = '\0';

    p = s;

    printf("\nS= %s, P= %s, *(p+1)= %c, p+1= %s", s, p, *(p+1), p+1);

    strcpy(s, "\nShe sells sea shells by the seashore");

    printf("%s", s);

    p += 17;

    for (; *p != '\0'; ++p)
    {
        if (*p == 'e')
        {
            *p = 'E';
        }

        if (*p == ' ')
        {
            *p = '\n';
        }
    }

    printf("%s\n\n", s);

}