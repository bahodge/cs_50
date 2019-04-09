#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string i = get_string("i: ");
    string j = get_string("j: ");

    i == j ? printf("same\n") : printf("different\n");
}