#include "mergesort.h"

int main(void)
{
    int sz, key[] = { 4, 3, 1, 67, 55, 8, 0, 4,
                      -5, 37, 7, 4, 2, 9, 1, -1};

    sz = sizeof(key) / sizeof(int); // neat way to find the length of an array

    printf("Before mergestor: \n");
    wrt(key, sz);
    mergesort(key, sz);
    printf("After mergestor: \n");
    wrt(key, sz);

    return 0;
}