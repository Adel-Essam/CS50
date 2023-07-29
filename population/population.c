#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);

    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end <= start);


    // TODO: Calculate number of years until we reach threshold
    int n = 0;
    for(int i = 0;;i++)
    {
        if(start >= end)
        {
            break;
        }
        start += (start / 3 - start / 4);
        // printf(" %i \n", start);
        n++;
    }
    // TODO: Print number of years
    printf("years: %i\n", n);
}

