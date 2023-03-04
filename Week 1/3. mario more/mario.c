#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;

    // Prompt user for height
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Print pyramid
    for (int i = 0; i < height; i++)
    {
        // Print left pyramid
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }

        // Print gap
        printf("  ");

        // Print right pyramid
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }

        // Print newline
        printf("\n");
    }
    return 0;
}