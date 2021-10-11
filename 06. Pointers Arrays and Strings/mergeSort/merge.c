#include "mergesort.h"

void merge(int arrA[], int arrB[], int sortedArr[], int m, int n)
{
    int arrAIndex = 0, arrBIndex = 0, k = 0;

    while (arrAIndex < m && arrBIndex < n)
    {
        if (arrA[arrAIndex] < arrB[arrBIndex])
        {
            sortedArr[k++] = arrA[arrAIndex++];
        }
        else
        {
            sortedArr[k++] = arrB[arrBIndex++];
        }
    }

    // pick up any remaining
    while (arrAIndex < m)
    {
        sortedArr[k++] = arrA[arrAIndex++];
    }

    while (arrBIndex < n)
    {
        sortedArr[k++] = arrB[arrBIndex++];
    }

}