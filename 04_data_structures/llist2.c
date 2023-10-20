// appends numbers to a linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(int argc, char *argv[])
{
    // initialize the empty list
    node *list = NULL;

    // loop through command line arguments
    for (int i = 1; i < argc; i++)
    {
        int num = atoi(argv[i]);
        // allocate a new node
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        n->number = num;
        n->next = NULL;
        // if list is empty, n is the list
        if (list == NULL)
        {
            list = n;
        }
        else
        {
            // iterate over the nodes
            for (node *ptr = list; ptr != NULL; ptr = ptr->next)
            {
                // if at end of list, add the node
                if (ptr->next == NULL)
                {
                    ptr->next = n;
                    break;
                }
            }
        }
    }

    // print the list
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i ", ptr->number);
    }
    printf("\n");

    // free memory
    node *ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }
}