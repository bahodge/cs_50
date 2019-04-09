#include <stdio.h>

int main(void)
{
    FILE *file = fopen("my_first_file.txt", "r");
    FILE *file2 = fopen("my_second_file.txt", "w");

    char character;
    while ((character = fgetc(file)) != EOF)
    {
        fputc(character, file2);
    }

    printf("\n");
    fclose(file2);
    fclose(file);
}