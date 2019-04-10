#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int *numbers = NULL;

    int capacity = 0;
    int size = 0;
    while (true)
    {
        int number = get_int("Number: ");

        if (size == capacity)
        {
            numbers = realloc(numbers, sizeof(int) * (size + 1));
            capacity++;
        }
        numbers[size] = number;
        size++;

        if (number == INT_MAX)
        {
            for (int i = 0; i < size - 1; i++)
            {
                printf("\nYou input %i\n", numbers[i]);
            }
            break;
        }
    }
    free(numbers);
}