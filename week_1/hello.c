#include <stdio.h>
/* This is a comment */

int main()
{

    char name[50] = ("Name: \n");

    printf("Name: ");
    scanf("%s", name);

    printf("Hello, %s!\n", name);
    return 0;
}