#include "main.h"
#include <stdlib.h>

/**
 * _strlen - length of a string
 * @s: input char
 * Return: length of a string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
/**
* str_concat - Concat 2 strings.
* @s1: string
* @s2: string
* Return: char
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int l1, l2; /* @l1: int*/
	char *conc, *tmp; /* @l2: int */

	if (!s1)   /* @malloc: function to hold memory*/
		s1 = "";
	else
		l1 = _strlen(s1);
	if (!s2)
		s2 = "";
	else
		l2 = _strlen(s2);
	conc = (char *)malloc(l1 + l2 + 1);
	if (!conc)
		return (0);
	tmp = conc;
	while (*s1)
		*tmp++ = *s1++;
	while ((*tmp++ = *s2++))
		;
	return (conc);
}
