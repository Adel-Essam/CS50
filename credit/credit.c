#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long long n;
    n = get_long_long("Number: ");
    long long x = n;
    int r = 0, sum1 = 0, sum2 = 0, check = 0;
    // count the number of digits
    for (int d = 0; x > 0; d++)
    {
        x /= 10;
        r++;
    }

    for (int i = 0; i < r; i++)
    {
        // get the summtion of the first number and checking if the number after *2 is greater than 10

        int y1 = n % 10;
        // printf("%i", y1);
        if (i % 2 == 1)
        {
            sum1 += (y1 * 2) % 10;
            sum1 += (y1 * 2) / 10;
        }
        else
        {
            sum2 += n % 10;
        }
        // get the first two digits
        if (i == r - 2)
        {
            check = n;
            printf("%i\n", check);
        }
        n /= 10;
    }
    // checking if the checksum's last number is 0 and the cridet card type
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