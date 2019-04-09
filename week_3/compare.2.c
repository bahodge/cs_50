#include <stdio.h>
#include <cs50.h>
#include <string.h>

bool compare_strings(char *a, char *b);

int main(void)
{
    char *i = get_string("i: ");
    if (i == NULL)
    {
        return 1;
    }

    char *j = get_string("j: ");
    if (j == NULL)
    {
        return 1;
    }

    if (compare_strings(i, j))
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    return 0;
}

bool compare_strings(char *a, char *b)
{
    if (strlen(a) != strlen(b))
    {
        return false;
    }

    for (int i = 0, n = strlen(a); i < n; i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}