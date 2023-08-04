#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: result
 */
int main(int argc, char *argv[])
{
int i, mult;
if (argc < 3)
{
printf("Error\n");
return (1);
}
for (i = 1; i < argc; i++)
{
mult = mult * atoi(argv[i]);
}
printf("%d\n", mult);
return (0);
}
