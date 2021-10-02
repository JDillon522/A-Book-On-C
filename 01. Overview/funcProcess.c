#include <stdio.h>

int main()
{
    int i, n;
    double min, max, x, minimum(double x, double y), maximum(double x, double y);
    void info();

    info();
    printf("\n\ninput    n:   ");
    scanf("%d", &n);
    printf("\n\ninput %d  real numbers:    ", n);
    scanf("%lf", &x);
    min = max = x;

    for (i = 2; i <= n; ++i)
    {
        scanf("%lf", &x);
        min = minimum(min, x);
        max = maximum(max, x);
    }

    printf("\n\nmin value = %f\nmax value = %f\n\n", min, max);
}

void info()
{
    printf("\n%s\n%s\n%s",
        "info: this program reads in an int value for n",
        "   and then processes n real numbers to find",
        "   the minimum and maximum values."
    );
}

double minimum(double x, double y)
{
    if (x < y)
    {
        return x;
    }

    return y;
}

double maximum(double x, double y)
{
    if (x > y)
    {
        return x;
    }

    return y;
}