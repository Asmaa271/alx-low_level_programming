#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - function that print anything
 * @format: types of arguments passed to the function
 * @...: the list of values to print
 * Return: result
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *separator = "";
char c;
va_start(args, format);
while (format && format[i])
{
c = format[i];
if (c == 'c')
{
printf("%s%c", separator, va_arg(args, int));
separator = ", ";
}
else if (c == 'i')
{
printf("%s%d", separator, va_arg(args, int));
separator = ", ";
}
else if (c == 'f')
{
printf("%s%f", separator, va_arg(args, double));
separator = ", ";
}
else if (c == 's')
{
char *str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", separator, str);
separator = ", ";
}
i++;
}
va_end(args);
printf("\n");
}
