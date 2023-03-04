#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long long card_number;
    int sum = 0;
    int digits = 0;
    int first_digit;
    int second_digit;

    // Prompt user for credit card number
    do
    {
        card_number = get_long_long("Number: ");
    }
    while (card_number <= 0);

    long long number = card_number;

    // Iterate over each digit in the card number
    while (number > 0)
    {
        // Get the last digit of the number
        int digit = number % 10;

        // Determine whether to multiply by 1 or 2
        if (digits % 2 == 0)
        {
            sum += digit;
        }
        else
        {
            int product = digit * 2;
            sum += product % 10;
            sum += product / 10;
        }

        // Keep track of the first and second digits
        second_digit = first_digit;
        first_digit = digit;

        // Move to the next digit
        number /= 10;
        digits++;
    }

    // Check if the card number is valid
    bool valid = (sum % 10 == 0 && digits >= 13 && digits <= 16);

    // Determine the card type
    if (valid && (first_digit == 4))
    {
        printf("VISA\n");
    }
    else if (valid && (first_digit == 5) && (second_digit >= 1 && second_digit <= 5))
    {
        printf("MASTERCARD\n");
    }
    else if (valid && (first_digit == 3) && (second_digit == 4 || second_digit == 7))
    {
        printf("AMEX\n");
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}