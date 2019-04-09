#include <stdio.h>

void cough(int);

int main(void)
{
    cough(10);
}

void cough(int n)
{

    for (int i = 0; i < n; i++)
    {

        printf("cough!\n");
    }
}
