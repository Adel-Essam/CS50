#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>


typedef struct node
{
    string word;
    struct node *next;
}node;

void print_node (node *nnode);
void unload (node *nnode);

int main()
{
    node *list = NULL;
    int i = 1;
    while (i > 0)
    {
        i = get_int("Enter a nigative number to stop : ");
        string s = get_string("Enter a phrase : ");
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            printf("failed to allocate memory");
            return 1;
        }
        n->word = s;
        n->next = list;
        list = n;
        print_node(list);
    }

    unload(list);
    return 0;
}
void print_node (node *nnode)
{
    printf ("+------ print_node ------+\n\n");
    while (nnode != NULL)
    {
        printf ("Location : %p\n", nnode);
        printf ("Value : %s\n", nnode->word);
        printf ("Next Location : %p\n", nnode->next);
        printf ("--------------------------\n");
        nnode = nnode->next;
    }
}

void unload (node *nnode)
{
    while (nnode != NULL)
    {
        node *ptr = nnode->next;
        free(nnode);
        nnode = ptr;
    }

}
