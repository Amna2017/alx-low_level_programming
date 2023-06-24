#include "lists.h"

/**
 * insert_dnodeint_at_index  - it is to insert node at specic index
 *
 *@h : dlistint_t node
 *@idx : specific index
 *@n : value of node
 * Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{dlistint_t *new_node, *current;
unsigned int i;
if (h == NULL)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
if (*h == NULL && idx > 0)
{
free(new_node);
return (NULL);
}
if (idx == 0)
{
new_node->prev = NULL;
new_node->next = *h;
if (*h != NULL)
(*h)->prev = new_node;
*h = new_node;
}
else
{
current = *h;
for (i = 0; i < idx - 1; i++)
{
if (current == NULL)
{
free(new_node);
return (NULL);
}
current = current->next;
}
if (current == NULL)
{
free(new_node);
return (NULL);
}
new_node->prev = current;
new_node->next = current->next;
if (current->next != NULL)
current->next->prev = new_node;
current->next = new_node;
}
return (new_node);
}
