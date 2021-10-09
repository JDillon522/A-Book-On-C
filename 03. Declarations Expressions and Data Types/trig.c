#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    double x, h;

    printf("\n:::: Trigonometric Tables ::::\n");

    while (i)
    {
        printf("\nInput a starting value and a step:  ");
        scanf("%lf %lf", &x, &h);
        printf("\n\n x \t sin(x) \t cos(x) \t tan(x)");
        printf("\t pythagorean discrepancy");

        for (i = 0; i < 10; ++i)
        {
            printf("\n%g \t %g \t %g \t %g \t %g",
                x, sin(x), cos(x), tan(x),
                sin(x) * sin(x) + cos(x) * cos(x) - 1.0
            );
            x += h;
        }
    }

    return 0;
}