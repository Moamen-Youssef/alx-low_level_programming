#include <stdlib.h>
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
if (!filename)
{
return (0);
}

file = open(filename, O_RDONLY);
if (file == -1)
{
return (0);
}
buffer = malloc(sizeof(char) * letters);
if (!buffer)
{
return (0);
}
read_file = read(file, buffer, letters);
write_file = write(STDOUT_FILENO, buffer, read_file);
close(file);
free(buffer);
return (write_file);
}
