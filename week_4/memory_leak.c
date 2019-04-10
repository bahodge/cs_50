#include <stdio.h>
#include <stdlib.h>

void bad_function(void);

int main(void)
{
    bad_function();
}

void bad_function(void)
{
    // Allocate some dynamic memory

    int *x = malloc(10 * sizeof(int));
    printf("x is: %p\n", x);
    // Allocating memory out of array bounds
    // continues to work but is hiding
    // running valgrind helps find the problem
    // x[10] = 25

    x[9] = 25;
    free(x);
}