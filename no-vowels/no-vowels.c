// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

void replace(string s);

int main(int argc, string argv[])
{
    printf("usage: ./no-vowels word\n");
    if (argc != 2)
    {
        printf("error there must be one word");
        return 1;
    }
    replace(argv[1]);

    printf("%s\n", argv[1]);
}

void replace(string s)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        switch ((int) s[i])
        {
            case 97:
                s[i] = '6';
                break;
            case 101:
                s[i] = '3';
                break;
            case 105:
                s[i] = '1';
                break;
            case 111:
                s[i] = '0';
                break;

            default:
                continue;
        }
    }
}