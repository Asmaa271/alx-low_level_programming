#include "main.h"
/**
 * _strncat - Concatenates two strings, using at most n bytes from src
 * @dest: the destination string
 * @src: the source string 
 * @n: the maximum number of bytes from src
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;
int dest_len = 0;
int i = 0;
while (*ptr != '\0')
{
ptr++;
dest_len++;
}
while (*src != '\0' && i < n)
{
dest[dest_len] = *src;
dest_len++;
src++;
i++;
}
dest[dest_len] = '\0';
return (dest);
}
