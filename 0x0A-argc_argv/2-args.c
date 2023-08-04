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
for (int i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
