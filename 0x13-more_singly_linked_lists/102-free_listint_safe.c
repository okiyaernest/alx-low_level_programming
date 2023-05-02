#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a linked list of listint_t nodes
 * @h: A pointer to a pointer to the head node of the linked list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
    size_t count = 0;
    listint_t *current, *temp;

    if (h == NULL || *h == NULL)
        return (0);

    current = *h;
    while (current)
    {
        count++;
        temp = current->next;
        free(current);
        if (temp >= current)
            break;
        current = temp;
    }

    *h = NULL;

    return (count);
}
