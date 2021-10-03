#include <stdio.h>
#include <math.h>

int main()
{
    int numberOfPowers;
    printf("How many integers do you want the power of?    ");
    scanf("%d", &numberOfPowers);

    printf("\n----- Table of powers -----");
    printf("\ninteger     square     cube     quartic     quintic");
    printf("\n====================================================\n");

    for (double i = 1; i <= numberOfPowers; i++)
    {
        double sq = pow(i, 2);
        double cube = pow(i, 3);
        double quar = pow(i, 4);
        double quin = pow(i, 5);
        printf("%7.0f%11.0f%9.0f%12.0f%13.0f\n", i, sq, cube, quar, quin);
    }
    return 0;
}

