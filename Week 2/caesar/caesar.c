#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // Check for the correct number of command-line arguments
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Check that the key is a non-negative integer
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Convert key to integer
    int key = atoi(argv[1]) % 26;

    // Get plaintext input from user
    string plaintext = get_string("plaintext: ");

    // Encrypt plaintext using Caesar's cipher
    printf("ciphertext: ");
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (isalpha(plaintext[i]))
        {
            // Preserve case of letters
            if (isupper(plaintext[i]))
            {
                printf("%c", 'A' + (plaintext[i] - 'A' + key) % 26);
            }
            else
            {
                printf("%c", 'a' + (plaintext[i] - 'a' + key) % 26);
            }
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");

    return 0;
}