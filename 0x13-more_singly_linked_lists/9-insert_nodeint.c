#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a
 *                            linked list of listint_t nodes.
 * @head: A pointer to a pointer to the head node of the linked list.
 * @idx: The index of the list where the new node should be added.
 * @n: The value to store in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node, *current;
    unsigned int i;

    if (head == NULL)
        return (NULL);

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    current = *head;
    for (i = 0; i < idx - 1 && current != NULL; i++)
        current = current->next;

    if (current == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->next = current->next;
    current->next = new_node;

    return (new_node);
}
