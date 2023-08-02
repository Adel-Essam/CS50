// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

void replace(string s []);

int main(int argc, string argv[])
{
    printf("usage: ./no-vowels word");
    if (argc != 2)
    {
        printf("error there must be one word");
        return 1;
    }
    replace(argv[1]);

    printf("%s/n"argv[i]);

}

void replace(string s[])
{
    for (int i = 0; i != '/0'; i++)
    {
        switch ((int) s[i])
        {
        case 97:
            s[i] = '6';
        case 101:
            s[i] = '3';
        case 105:
            s[i] = '1';
        case 111:
            s[i] = '0';

        default:
            continue;
        }
    }

}