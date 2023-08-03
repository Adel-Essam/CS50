// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    int n = strlen(password);
    bool b0 = 0, b1 = 0, b2 = 0;
    for (int i = 0; i < n; i++)
        {
            if((int) password[i] >=33 && (int) password[i] <=57)
            {
                b0 = 1;
            }
            if((int) password[i] >=65 && (int) password[i] <= 90)
            {
                b1 = 1;
            }
            if((int) password[i] >=97 && (int) password[i] <=122)
            {
                b2 = 1;
            }
        }
        return (b0 && b1 && b2);
}
