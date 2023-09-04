#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFFER_SIZE 1024
/**
 * error_exit - function that handles errors
 *
 * @message: the error message
 * @code: the exit code
 */
void error_exit(const char *message, int code)
{
dprintf(2, "%s\n", message);
exit(code);
}
/**
 * copy_file - function that copies the content of one file to another
 *
 * @fd_from: the source file
 * @fd_to: the destination file
 *
 * Return: result
 */
ssize_t copy_file(int fd_from, int fd_to)
{
char buffer[BUFFER_SIZE];
ssize_t total_bytes_written = 0;
while (1)
{
ssize_t bytes_read = read(fd_from, buffer, BUFFER_SIZE);
if (bytes_read == -1)
{
return (-1);
}
if (bytes_read == 0)
{
break;
}
ssize_t bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
return (-1);
}
total_bytes_written += bytes_written;
}
return (total_bytes_written);
}
