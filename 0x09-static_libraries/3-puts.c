#include "main.h"
/**
 * _puts-prints astrings fllowed by anew line
 * @str: string to print
 */
void _puts(char *str)
{
	while(*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
