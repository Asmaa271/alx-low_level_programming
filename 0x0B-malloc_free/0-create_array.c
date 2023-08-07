#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 *
 * Return: result
 *
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
{
return (NULL);
}
array = malloc(size * sizeof(char));
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
