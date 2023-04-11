#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char ca
 * @size: size of array
 * @ca: char to assign
 * Description: creat array of size size and assign char ca
 * Return: pointer to array, NULL if fail
 *
 */

char *create_array(unsigned int size, char ca)
{
char *as1;
unsigned int i;
/* @as1: pointer of array */
as1 = malloc(sizeof(char) * size);
if (size == 0 || as1 == NULL)
return (NULL);
for (i = 0; i < size; i++)
as1[i] = ca;
return (as1);
}
