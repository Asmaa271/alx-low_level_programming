#include "main.h"
/**
 * _strcat - Concatenates two string
 * @dest: destination string
 * @src: source string
 *
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
char *p = dest;
while (*p != '\0')
p++;
while (*src != '\0')
{
*p = *src;
p++;
src++;
}
*p = '\0';
return (dest);
}
