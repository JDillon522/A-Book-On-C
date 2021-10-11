#include <stdio.h>

double pow(double x, int n);

// Test: 3.5^7 = 6433.9296875
int main(void)
{
    double x;
    int n;

    printf("Enter first the base and then its exponent\n");
    scanf("%lf %d", &x, &n);
    double total = pow(x, n);

    printf("The total is: %f\n", total);
}

double pow(double x, int n)
{
    double total = x;
    for (int i = 2; i <= n; ++i)
    {
        total *= x;
    }

    return total;
}