#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    char arr[] = "abcdefghijklmnopqrstuvwxyz";
    int se = strlen(argv[1]);
    if (se != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    bool seen[26] = {0};
    for (int co = 0; co < se; co++)
    {
        char c = argv[1][co];
        if (!isalpha(c) || seen[tolower(c) - 'a'] == 1)
        {
            printf("Usage: ./substitution key\n");
            return 1;
        }
        seen[tolower(c) - 'a'] = 1;
    }
    string s2 = get_string("plaintext: ");

    printf("ciphertext: ");
    for (int i = 0; s2[i] != '\0'; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            // chech if the character in the word is in the array of chars and get the index
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
            else if (!isalpha(s2[i]))
            {
                printf("%c", s2[i]);
                break;
            }
        }
    }
    printf("\n");
}