#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @hh: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *hh)
{
size_t s = 0;
while (hh)
{
if (!hh->str)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", hh->len, hh->str);
hh = hh->next;
s++;
}
return (s);
}
