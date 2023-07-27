#include "main.h"
/**
 * _strncat-concatenates two string using n byte
 * @dest: the destination string
 *
 * @src:the source string
 *
 * @n: the max number of bytes from the source
 *Return:the result dest
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
