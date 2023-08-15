#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input);

int main(void)
{
    string input = get_string("Enter a positive integer: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    // Convert string to int
    printf("%i\n", convert(input));
}

int convert(string input)
{
    int sl = strlen(input), out = 0;
    for (int i = 0; input[i] != '\0'; i++, sl--)
    {
        int n = input[i] - '0';
        // out += n * ((int) pow(10, sl - 1));
        out = out * 10 + n;
    }
    return out;
    // if (input[0] == '\0')
    //     return 0;

    // printf("Processing: %c\n", input[0]);

    // return convert(input + 1) * 10 + (input[0] - '0');
}