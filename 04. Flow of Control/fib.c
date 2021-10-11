#include <stdio.h>

#define SIZE_OF_FIBS 15

// Fibonacci
int main()
{
    // f(sub i+1) = f(sub i) + f(sub i - 1)
    int fibs[SIZE_OF_FIBS] = {0, 1, 2};

    for (int i = 0; i < SIZE_OF_FIBS; i++)
    {
        if (i > 1 && i + 1 < SIZE_OF_FIBS)
        {
            fibs[i + 1] = fibs[i] + fibs[i - 1];
        }
        printf("%d     %d\n", i, fibs[i]);
    }


    return 0;
}