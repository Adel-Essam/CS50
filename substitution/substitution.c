#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    string s = get_string(0, "code: ");
    string s2 = get_string(0, "message: ");
    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int se = strlen(s);

    for (int co = 0; s[1][co] !='\0'; co++)
    {
        if (!(isalpha(s[1][co])) || se == 0)
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
            //chech if the character in the word is in the array of chars
            if (tolower(s2[i]) == arr[j])
            {
                //check if the letter is upper case or lower case to print it
                if (isupper(s2[i]))
                {
                    printf("%c", toupper(s[j]));
                }
                else
                {
                    printf("%c", tolower(s[j]));
                }
                break;
            }
            //check if there is any punctuation marks or spaces
            else if (isalpha(s2[i]) == 0)
            {
                printf("%c",s2[i]);
                break;
            }
        }
    }
}

}