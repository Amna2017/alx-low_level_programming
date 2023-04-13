#include "main.h"
#include <stdio.h>
/**
 * *malloc_checked - a function that allocates memory using malloc
 * @ ptr: malloc pointer
 * return :ptr if sucsses
 * return :98 if failed
 *  @b: int
 */
void *malloc_checked(unsigned int b)
{
	int* ptr;

	ptr = malloc(b);
	
	if (ptr == NULL) 
		exit (98);
	return (ptr);
}
