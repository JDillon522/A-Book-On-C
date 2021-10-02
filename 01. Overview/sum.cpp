#include <stdio.h>

int main()
{
    int i;
    double x, sum = 0.0;

    /*
        added for debugging since vscode wont pipe in a stream
        freopen takes the file, does the operation, in this case "r" for "read"
        it then redirects the output of that operation to the particular stream
        so in this case, the data of stdin is replaced by the content of the file,
        and can then be read by scanf().

        if it was stdout then the printf() functions would actually write to the file
        https://www.tutorialspoint.com/c_standard_library/c_function_freopen.htm
    */
    FILE *file;
    file = freopen("sumdata", "r", stdin);

    printf("\n%12s%12s%15s\n", "count", "item", "running sum");

    for (i = 1; scanf("%lf", &x) == 1; ++i)
    {
        printf("\n%12d%12.1f%15.3f", i, x, sum += x);
    }

    printf("\n\n");

    fclose(file);
    return 0;
}