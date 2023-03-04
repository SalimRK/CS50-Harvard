#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start;
    do
    {
        start = get_int("Positive Integer: ");
    }
    while (start < 9);

    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);

    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    int current = start;
    while (current < end)
    {
        int born = current / 3;
        int passed = current / 4;
        current += (born - passed);
        years++;
    }
    // TODO: Print number of years
    printf("Years: %d\n", years);
}