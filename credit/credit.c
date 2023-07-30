#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long long n;
    n = get_long_long("Number: ");
    long long x = n;
    int r = 0, sum1 = 0, sum2 = 0, check, y1;
    // count the number of digits
    for (int d = 0; x > 0; d++)
    {
        x /= 10;
        r++;
    }

    for (int i = 0; i < (r / 2); i++)
    {
        // get the summtion of the first number and checking if the number after *2 is greater than 10
        y1 = n % 100 / 10;
        if (i != (r / 2) - 1)
        {
            if (y1 * 2 > 10)
            {
                for (int j = 0; j < 2; j++)
                {
                    sum1 += y1 % 10;
                }
            }
            else
            {
                sum1 += y1;
            }
        }
        sum2 += n % 10;
        // get the first number
        if (i == (r / 2) - 1)
        {
            check = n;
            // printf("%i", check);
        }
        n /= 100;
    }
    // checking if the checksum's last number is 0 and the cridet card type
    if ((sum1 + sum2) % 10 == 0)
    {
        if (check >= 51 && check <= 55)
        {
            printf("AMEX\n");
        }
        if (check == 37 || check == 34)
        {
            printf("MASTERCARD\n");
        }
        if (check == 40)
        {
            printf("VISA\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}