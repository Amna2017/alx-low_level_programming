#include "lists.h"

/**
 * delete_dnodeint_at_index - delet sertane node
 *
 *@head : head node
 *@index : certain index
 * Return: 1 success 0 fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current, *temp;
unsigned int i;
if (head == NULL || *head == NULL)
return (-1);
current = *head;
if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}
for (i = 0; i < index - 1; i++)
{
if (current == NULL)
return (-1);
current = current->next;
}
if (current == NULL || current->next == NULL)
return (-1);
temp = current->next;
current->next = temp->next;
if (temp->next != NULL)
temp->next->prev = current;
free(temp);
return (1);
}
