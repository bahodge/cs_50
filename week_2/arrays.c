#include <cs50.h>
#include <stdio.h>

const int COUNT = 3;

void chart_scores(int scores[]);
void make_chart(int score);

int main(void)
{
    int scores[3];

    for (int i = 0; i < COUNT; i++)
    {
        scores[i] = get_int("Score %i: ", i + 1);
    }
    chart_scores(scores);
}

void chart_scores(int scores[])
{
    for (int i = 0; i < COUNT; i++)
    {
        printf("Score %i: ", i + 1);
        make_chart(scores[i]);
    }
}

void make_chart(int score)
{
    for (int i = 0; i < score; i++)
    {
        printf("#");
    }
    printf("\n");
}
