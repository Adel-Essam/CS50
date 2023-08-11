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

    int keyLength = strlen(argv[1]);

    if (keyLength != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    // Check for invalid characters and duplicate characters
    int seen[26] = {0};
    for (int i = 0; i < keyLength; i++)
    {
        char c = argv[1][i];
        if (!isalpha(c) || seen[tolower(c) - 'a'] == 1)
        {
            printf("Invalid key.\n");
            return 1;
        }
        seen[tolower(c) - 'a'] = 1;
    }

    string s2 = get_string("plaintext: ");

    printf("ciphertext: ");
    for (int i = 0; s2[i] != '\0'; i++)
    {
        char c = s2[i];
        if (isalpha(c))
        {
            if (isupper(c))
            {
                printf("%c", toupper(argv[1][c - 'A']));
            }
            else
            {
                printf("%c", tolower(argv[1][c - 'a']));
            }
        }
        else
        {
            printf("%c", c);
        }
    }
    printf("\n");
}
