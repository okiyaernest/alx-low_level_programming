#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a linked list of listint_t nodes
 * @head: A pointer to the head node of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;
    const listint_t *current;

    if (head == NULL)
        return (0);

    current = head;
    while (current)
    {
        count++;
        printf("[%p] %d\n", (void *) current, current->n);
        current = current->next;
        if (current >= current->next)
        {
            printf("-> [%p] %d\n", (void *) current->next, current->next->n);
            exit(98);
        }
    }

    return (count);
}
