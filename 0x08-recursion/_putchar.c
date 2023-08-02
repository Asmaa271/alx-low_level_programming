#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character
 * @c: the character to print
 *
 * Return: result
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

