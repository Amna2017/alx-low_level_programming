#include "main.h"

/**
 *this function to print sting from right to left
 *@*S pointer to string
 *it Return always zero
 */
/* this @s string*/

void _print_rev_recursion(char *s)
{
if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
