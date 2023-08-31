#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string containing the binary number.
 *
 * Return: The converted number, or 0 if an error occurs.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int n = 0;
int i;
for (i = strlen(b) - 1; i >= 0; i--)
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
n += (b[i] - '0') * (1 << (strlen(b) - i - 1));
}
return (n);
}
