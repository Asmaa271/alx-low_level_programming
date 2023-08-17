#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - function that print strings followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: the list of strings to print
 * Return: result
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *str;
va_start(args, n);
for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
if (str != NULL)
printf("%s", str);
else
printf("(nil)");
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
