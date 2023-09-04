#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - check the code
 * @argc: number
 * @argv: array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
error_exit("Usage: %s file_from file_to", 97, argv[0]);
}
int fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
error_exit("Error: Can't read from file %s", 98, argv[1]);
}
int fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
error_exit("Error: Can't write to %s", 99, argv[2]);
}
ssize_t bytes_copied = copy_file(fd_from, fd_to);
if (bytes_copied == -1)
{
error_exit("Error: File copy failed", 99);
}
if (close(fd_from) == -1 || close(fd_to) == -1)
{
error_exit("Error: Can't close fd", 100);
}
return (0);
}
