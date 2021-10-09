#include <stdio.h>

int main()
{
    int x, y;

    printf("\n\nInteger arithmetic: Experiment with your machine");

    while (1)
    {
        printf("\n\nInput two integers:   ");
        scanf("%d %d", &x, &y);
        printf("\nx = %d\ny = %d\n\n", x, y);
        printf("x + y = %d\nx - y = %d\n", x+y, x-y);
        printf("x * y = %d\nx / y = %d\n", x*y, x/y);
        printf("(x / y) * y = %d\n", (x/y) * y);
        printf("x %% y = %d", x%y);
        printf("(x / y) * y + x %% y = %d", (x/y)*y + x%y);
    }

    return 0;
}