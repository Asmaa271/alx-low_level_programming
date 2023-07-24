#include "main.h"
#include <stdio.h>
/**
 * print_rev - imprime en reversa
 * @s: Pointer to the input string.
 * return: 0
 */
void print_rev(char *s)
{
int length = 0;
int i;
while (*s != '\0')
{
length++;
s++;
}
s--;
for (i = length; i > 0; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
