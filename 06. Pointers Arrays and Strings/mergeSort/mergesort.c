#include "mergesort.h"

void mergesort(int arrToSort[], int arraySize)
{
    int arrA, stepSize, m, *dynamicArray;

    for (m = 1; m < arraySize; m *= 2) // m needs to be a power of 2
    {
        // do nothing except compute m
    }

    if (arraySize < m)
    {
        printf("ERROR: Array size not a power of 2\n");
        exit(1);
    }

    dynamicArray = calloc(arraySize, sizeof(int));
    // check that calloc worked
    // useful for real situations where the heap might be full
    assert(dynamicArray != NULL);

    // start comparing arrays of 1, the last iteration will be arraySize/2.
    // On the following check the stepSize will double, equaling the size of the array
    for (stepSize = 1; stepSize < arraySize; stepSize *= 2)
    {
        // For each step size
        for (arrA = 0; arrA < arraySize - stepSize; arrA += 2 * stepSize)
        {
            // merge two sub arrays of arrToSort[] into a sub array of dynamicArray[]
            merge(arrToSort + arrA, arrToSort + arrA + stepSize, dynamicArray + arrA, stepSize, stepSize);
        }

        for (arrA = 0; arrA < arraySize; ++arrA)
        {
            arrToSort[arrA] = dynamicArray[arrA]; // write back into the array
        }
        wrt(arrToSort, arraySize);
    }

    free(dynamicArray);
}