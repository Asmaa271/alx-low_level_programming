#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: result
 */
int main(int argc, char *argv[])
{
int i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
