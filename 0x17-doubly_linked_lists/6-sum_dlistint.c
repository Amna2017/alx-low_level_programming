#include "lists.h"

/**
 * sum_dlistint - this function give me sum of all values DLL
 *
 *@head : head of DLL
 * Return: sum of values of DLL
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
