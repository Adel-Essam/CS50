#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int count_sentences(string s);
int count_words(string s);
int count_letters(string s);

int main(void)
{
    string s = get_string("text: ");
    float l = count_letters(s), w = count_words(s), se = count_sentences(s);
    printf("letters: %f", l)
    printf("words: %f", w)
    printf("sentenses: %f", se)
    float l2 = (l / w) * 100;
    float se2 = (se / w) * 100;

    // if (((l2 * 0.0588) - (se2 * 0.296) - 15.8) < 1)
    // {
    //     printf("Before Grade 1\n");
    // }
    // else if (((l2 * 0.0588) - (se2 * 0.296) - 15.8) > 16)
    // {
    //     printf("Grade 16+\n");
    // }
    // else
    // {
    //     printf("Grade %.0f\n", ((l2 * 0.0588) - (se2 * 0.296) - 15.8));
    // }
}
int count_sentences(string s)
{
    int sc = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '.' || s[i] == '?' || s[i] == '!')
        {
            sc++;
        }
    }
    return sc;
}
int count_words(string s)
{
    int w = 1;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            w++;
        }
    }
    return w;
}
int count_letters(string s)
{
    int l = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (isalnum(s[i]))
        {
            l++;
        }
    }
    return l;
}