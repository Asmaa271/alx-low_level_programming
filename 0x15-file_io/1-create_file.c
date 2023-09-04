#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: ´the name of the file to create
 * @text_content: the text content to write
 * Return: result
 */
int create_file(const char *filename, char *text_content)
{
int fd, len, write_status;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len] != '\0'; len++)
continue;
write_status = write(fd, text_content, len);
if (write_status == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
