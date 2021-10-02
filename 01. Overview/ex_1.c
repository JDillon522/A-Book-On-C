#include <stdio.h>

int main()
{
    char message[] = "\nshe sells sea shells by the seashore\n";

    // print all on one line
    printf(message);

    // print on three lines
    int x = 0;
    for (int i = 0; i < strlen(message); i++)
    {
        if (message[i] == ' ')
        {
            ++x;
            if (x % 3 == 0)
            {
                message[i] = '\n';
            }
        }
    }
    printf(message);

    // inside a box
    // ?? not sure what they mean by that. Draw a box and fill it? whitespace counts?
    // skipping

    return 0;
}