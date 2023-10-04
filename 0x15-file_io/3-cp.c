#include "main.h"
#include <stdlib.h>
/**
 * copy_to_file - check the code
 * @file_from: .....>
 * @file_to: .....>
 * Return: Always 0.
 */
int copy_to_file(const char *file_from, const char *file_to)
{
int file_from, file_to;
ssize_t file_from_data;
char buffer[1024];
file_from = open(file_from, O_RDONLY);
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Can't read from file %s\n", file_from);
exit(98);
}
file_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
while ((file_from_data = read(file_from,buffer, sizeof(buffer))) > 0)
{
if (write(file_to, buffer, file_from_data) < file_from_data)
{
dprintf(STDERR_FILENO, "Can't write to file %s\n", file_to);
close(file_from);
exit(99);
}
}
if (close(file_from) == -1)
{
dprintf(STDERR_FILENO, "Can't close fd %d\n", file_from);
exit(100);
}
if (close(file_to) == -1)
{
dprintf(STDERR_FILENO, "Can't close fd %d\n", file_to);
exit(100);
}
return (1);
}

/**
* main - program that copies the content of a file to another file
* @ac: num argument
* @av: string argument
* Return: 0
*/
int main(int ac, char **av)
{
int res;
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
res = copy_to_file(av[1], av[2]);
return (res);
}
