#include "lists.h"

/**
 *print_dlistint - to print all in double linked list
 *
 *@h : name of DLL
 * Return: The number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
