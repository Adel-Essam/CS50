#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("hight: ");
    }
    while (n > 8 || n < 1);

    int x = n;
    for (int i = 0; i < n; i++)
    {
        for (int l = x; l >= 0; l--)
        {
            printf(" ");
        }
        x--;

        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("  ");
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }

        printf("\n");
    }
}