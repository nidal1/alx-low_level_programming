#include "lists.h"

/**
 * struct print_listint - print integer of each node in the list
 * @h: struct listint_t
 *
 * Return: long unsigned integer counter
 */
size_t print_listint(const listint_t *h)
{
    size_t count = 0;
    if (h == NULL)
    {
        return count;
    }

    listint_t *nodePtr = h;
    while (nodePtr){
        printf("%d\n", nodePtr->n);
        count++;
        nodePtr = nodePtr->next;
    }

    return count;
}
