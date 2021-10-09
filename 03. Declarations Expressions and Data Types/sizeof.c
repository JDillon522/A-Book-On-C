#include <stdio.h>

int main()
{
    // The following outputs the size of the fundamental types on your machine

    printf("\n  char:     %d byte ", sizeof(char));
    printf("\n  short:    %d byte ", sizeof(short));
    printf("\n  int:      %d byte ", sizeof(int));
    printf("\n  long:     %d byte ", sizeof(long));
    printf("\n  unsigned: %d byte ", sizeof(unsigned));
    printf("\n  double:   %d byte ", sizeof(double));
    printf("\n\n");

    /*
    char:     1 byte
    short:    2 byte
    int:      4 byte
    long:     4 byte
    unsigned: 4 byte
    double:   8 byte
    */

    return 0;
}