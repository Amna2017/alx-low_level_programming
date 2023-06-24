#include "lists.h"

/**
 * free_dlistint - function to free DLL
 *
 *@head : this head node
 * Return : free dlistint
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *temp;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
