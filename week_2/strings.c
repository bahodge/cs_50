#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input: ");
    printf("String is: %s\n", s);

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%i: %c\n", i + 1, s[i]);
    }
}