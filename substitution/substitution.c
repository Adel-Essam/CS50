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
        if (isalpha(s2[i]))
        {
            int index = tolower(s2[i]) - 'a';
            if (isupper(s2[i]))
            {
                printf("%c", toupper(argv[1][index]));
            }
            else
            {
                printf("%c", argv[1][index]);
            }
        }
        else
        {
            printf("%c", s2[i]);
        }
    }
    printf("\n");
}
