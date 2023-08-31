#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 *
 * @b: pointer to a string
 * Return: result
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int res = 0;
int i = 0;
if (b == NULL)
return (0);
while (b[i] != '\0')
{
if (b[i] == '0')
{
res = res * 2;
}
else if (b[i] == '1')
{
res = res * 2 + 1;
}
else
{
return (0);
}
i++;
}
return (res);
}
