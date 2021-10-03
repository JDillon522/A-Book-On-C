#include <stdio.h>

int main()
{
    // exercise 2 and 3:
    // changing 1760.0 to an int gives a significantly different answer
    // chaing miles and yards to float from int does not. Presumably because they are integers instead of rational numbers
    // computer math is weird
    float miles, yards;
    float kilometers;

    miles = 26.f;
    yards = 385.f;
    kilometers = 1.609 * (miles + yards / 1760.0);
    printf("\nA Marathon is %f kilometers\n\n", kilometers);

    return 0;
}