#include "main.h"

/**
*this function used to 
* print 
*string in C language
*/
void _puts_recursion(char *s)
{
	if (*s) /* the *s is sting we need to print*/
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
