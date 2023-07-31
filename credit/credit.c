#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long long n;
    n = get_long_long("Number: ");
    long long x = n;
    int r = 0, sum1 = 0, sum2 = 0, check = 0;

    // Count the number of digits
    for (int d = 0; x > 0; d++)
    {
        x /= 10;
        r++;
    }

    // Process the credit card number digits from right to left
    for (int i = 0; i < r; i++)
    {
        // Extract the last digit
        int digit = n % 10;

        // Get the sum of digits at even positions (doubled)
        if (i % 2 == 1)
        {
            int doubledDigit = digit * 2;
            sum1 += (doubledDigit % 10) + (doubledDigit / 10);
        }
        else
        {
            // Get the sum of digits at odd positions
            sum2 += digit;
        }

        // Extract the first two digits for identifying the card type
        if (i == r - 2)
        {
            check = n;
        }

        // Move to the next digit
        n /= 10;
    }

    // Check the checksum and identify the card type
    if ((sum1 + sum2) % 10 == 0)
    {
        if ((check >= 51 && check <= 55) && r == 16)
        {
            printf("MASTERCARD\n");
        }
        else if ((check == 34 || check == 37) && r == 15)
        {
            printf("AMEX\n");
        }
        else if ((check / 10 == 4) && (r == 13 || r == 16))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}
