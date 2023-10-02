#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - check the code
 *@filename: ......,
 *@letters: ......,
 * Return:.....0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int file;
ssize_t read_file, write_file;
char *buffer;
file = open(filename, O_RDONLY);
buffer = malloc(letters);
if (!buffer)
{
return (0);
}
if (!filename)
{
return (0);
}
if (file == -1)
{
free(buffer);
return (0);
}
read_file = read(file, buffer, letters);
write_file = write(STDOUT_FILENO, buffer, read_file);
close(file);
return (write_file);
}
