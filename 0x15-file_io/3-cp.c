#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
/**
 * error_exit - function that handles errors
 * @code: the exit code
 * @message: the error message to print
 * Return : result
 */
void error_exit(int code, const char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(code);
}
/**
 * main - function handles file copyin
 * @argc: number
 * @argv: array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
error_exit(97, "Usage: cp file_from file_to");
}
const char *file_from = argv[1];
const char *file_to = argv[2];
int fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{
error_exit(98, "Error: Can't read from file");
}
int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (fd_to == -1)
{
error_exit(99, "Error: Can't write to file");
}
char buffer[1024];
ssize_t bytes_read;
while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
{
ssize_t bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1)
{
error_exit(99, "Error: Can't write to file");
}
}
if (bytes_read == -1)
{
error_exit(98, "Error: Can't read from file");
}
if (close(fd_from) == -1)
{
error_exit(100, "Error: Can't close fd");
}
if (close(fd_to) == -1)
{
error_exit(100, "Error: Can't close fd");
}
return (0);
}
