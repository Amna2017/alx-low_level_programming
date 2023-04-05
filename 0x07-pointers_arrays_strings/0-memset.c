#include "main.h"

/**
 * this function to print 
 * constant byte in Ram
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	for(i=0; n>0; i++)
	{
		s[i]=b;
		n--;
	}
return (s);
}
