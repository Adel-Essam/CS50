#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    string newstr, s2 = get_string(0, "plaintext: ");
    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                  'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int se = strlen(argv[1]);

    for (int co = 0; argv[1][co] != '\0'; co++)
    {
        if (!(isalpha(argv[1][co])) || se == 0)
        {
            printf("Usage: ./substitution key\n");
            return 0;
        }
    }
    if (se < 26)
    {
        printf("Key must contain 26 characters.\n");
    }

    for (int i = 0; s2[i] != '\0'; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            // chech if the character in the word is in the array of chars
            if (tolower(s2[i]) == arr[j])
            {
                // check if the letter is upper case or lower case to print it
                if (isupper(s2[i]))
                {
                    printf("%c", toupper(argv[1][j]));
                }
                else
                {
                    printf("%c", tolower(argv[1][j]));
                }
                break;
            }
            // check if there is any punctuation marks or spaces
            else if (isalpha(s2[i]) == 0)
            {
                printf("%c", s2[i]);
                break;
            }
        }
    }
}