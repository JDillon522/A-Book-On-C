#include <stdio.h>

int main()
{
    int x = 2000000000;

    int intFourBillion = x + x;
    printf("\nThe INTEGER sum of %d billion and %d billion: %d\n", x, x, intFourBillion);
    //The INTEGER sum of 2000000000 billion and 2000000000 billion: -294967296

    unsigned int unsignedMax = -1; // 4294967295
    unsigned int unsignedInt = x + x; // 4000000000
    printf("\nThe UNSIGNED INTEGER sum of %d billion and %d billion: %lu\n", x, x, unsignedInt);
    //The UNSIGNED INTEGER sum of 2000000000 billion and 2000000000 billion: 4000000000

    long longFourBillion = x + x;
    printf("\nThe INTEGER sum of %d billion and %d billion: %d\n", x, x, longFourBillion);
    //The INTEGER sum of 2000000000 billion and 2000000000 billion: -294967296

    double doubleFourBillion = x + x;
    printf("\nThe DOUBLE sum of %d billion and %d billion: %lf\n", x, x, doubleFourBillion);
    // The DOUBLE sum of 2000000000 billion and 2000000000 billion: -294967296.000000

    return 0;
}