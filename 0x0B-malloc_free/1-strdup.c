#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter
 * @str: the string
 * Return: result
 */
char *_strdup(char *str)
{
int l = 0;
char *d;
int i = 0;
if (str == NULL)
{
return (NULL);
}
while (str[l] != '\0')
{
l++;
}
d = malloc((l + 1) * sizeof(char));
if (d == NULL)
{
return (NULL);
}
while (i <= l)
{
d[i] = str[i];
i++;
}
return (d);
}
