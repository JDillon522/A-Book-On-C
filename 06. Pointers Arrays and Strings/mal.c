#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_array(int *a, int n);
int sum_array(int *a, int n);
void wrt_array(int *a, int n);

int main(void)
{
    int *a, n;

    srand(time(NULL)); // seed the random function
    printf("\n%s",
    "This program does the following repeatedly:\n"
    "\n"
    "   1) create space for an array of size n\n"
    "   2) fill the array with randomly distributed digits\n"
    "   3) print the array and the sum of its elements\n"
    "   4) release the space\n");

    for ( ; ; ) // will continually repeat the loop until an interrupt like ctl c orn the break statement
    {
        printf("Input n: ");
        // scanf both sets a var but also returns 0 or 1
        // remember anything not 0 is true. So if the user types a char when its expecting a digit it will return 0 and break
        int test = scanf("%d", &n);
        if (test == 0 || n < 1)
        {
            break;
        }
        putchar('\n');

        a = calloc(n, sizeof(int)); // allocate space for a[]
        // a = malloc(n * sizeof(int)); // functionally the same as calloc but it doesnt intialize the spaces to 0
        fill_array(a, n);
        wrt_array(a, n);
        printf("sum = %d\n\n", sum_array(a, n));
        free(a); // free up the memory in calloc
    }

    printf("\nBye\n");
    return 0;
}

void fill_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; ++i)
    {
        a[i] = rand() % 19 - 9; // why 19?
    }
}

int sum_array(int *a, int n)
{
    int i, sum = 0;

    for (i = 0; i < n; ++i)
    {
        sum += a[i];
    }
    return sum;
}

void wrt_array(int *a, int n)
{
    int i;

    printf("a = [");
    for (i = 0; i < n; ++i)
    {
        printf("%d%s", a[i], ((i < n - 1) ? ", " : "]\n"));
    }
}