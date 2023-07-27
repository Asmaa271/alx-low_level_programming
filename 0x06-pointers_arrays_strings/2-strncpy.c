#include "main.h"
/**
 *_strncpy - Copies the string
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes to be copied
 *
 * Return: result dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
