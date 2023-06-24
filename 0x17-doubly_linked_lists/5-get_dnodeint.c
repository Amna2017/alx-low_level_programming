#include "lists.h"

/**
 * get_dnodeint_at_index - get node at specific place
 *
 *@head : head node
 *@index : number of nodes
 * Return: number of nodes
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (count == index)
	{
		return (current);
	}
	else
	{
		return (NULL);
	}
}
