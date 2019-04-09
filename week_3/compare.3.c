#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    char *i = get_string("i: ");

    char *j = get_string("j: ");
    if (!i || !j)
    {
        return 1;
    }
    if (strcmp(i, j) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    return 0;
}
