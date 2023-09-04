#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#define BUFFER_SIZE 1024
/**
 * copy_file - function that copies the content of one file to another
 * @src_file: name of the source file
 * @dest_file: name of the destination file
 * Return: result
 */
int copy_file(const char *src_file, const char *dest_file)
{
int src_fd;
int dest_fd;
char *buffer;
int bytes_read, bytes_written;
while ((bytes_read = read(src_fd, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(dest_fd, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
dprintf(2, "Error: Can't write to %s\n", dest_file);
close(src_fd);
close(dest_fd);
return (99);
}
}
if (bytes_read == -1)
{
dprintf(2, "Error: Can't read from file %s\n", src_file);
close(src_fd);
close(dest_fd);
return (98);
}
return (0);
}
