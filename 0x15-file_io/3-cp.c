#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#define BUFFER_SIZE 1024
/**
 * main - function that copies the content of a file to another file
 * @n: number
 * @t: array
 * Return: result
 */
int main(int n, char **t)
{
int fd_from, fd_to, bytes_read, bytes_written;
char buffer[BUFFER_SIZE];
if (n != 3)
{
dprintf(2, "Usage: %s file_from file_to\n", t[0]);
exit(97);
}
fd_from = open(t[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(2, "Error: Can't read from file %s\n", t[1]);
exit(98);
}
fd_to = open(t[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
dprintf(2, "Error: Can't write to %s\n", t[2]);
close(fd_from);
exit(99);
}
while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
dprintf(2, "Error: Can't write to %s\n", t[2]);
close(fd_from);
close(fd_to);
exit(99);
}
}
if (bytes_read == -1)
{
dprintf(2, "Error: Can't read from file %s\n", t[1]);
close(fd_from);
close(fd_to);
exit(98);
}
if (close(fd_from) == -1 || close(fd_to) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", (close(fd_from) == -1) ? fd_from : fd_to);
exit(100);
}
return (0);
}
