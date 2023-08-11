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

    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                  'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    int keyLength = strlen(argv[1]);

    if (keyLength != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    // Create an array to store the substitution mapping
    char substitution[26];

    // Populate the substitution mapping
    for (int i = 0; i < 26; i++)
    {
        substitution[i] = argv[1][i];
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
                printf("%c", toupper(substitution[index]));
            }
            else
            {
                printf("%c", substitution[index]);
            }
        }
        else
        {
            printf("%c", s2[i]);
        }
    }
    printf("\n");
}