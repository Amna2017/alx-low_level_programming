#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the last
 *
 * @head: Pointer to a pointer to the head node
 * @n: Integer value to store in the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *last;

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	last = *head;
	while (last->next)
		last = last->next;
	last->next = new_node;
	new_node->prev = last;
	return (new_node);
}
