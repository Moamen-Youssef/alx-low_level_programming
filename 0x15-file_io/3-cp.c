#include "main.h"
#include <stdlib.h>
/**
 * copy_to_file - check the code
 * @filename1: .....>
 * @filename2: .....>
 * Return: Always 0.
 */
int copy_to_file(const char *filename1, const char *filename2)
{
int file1, file2;
ssize_t file1_data;
char buffer[1024];
file1 = open(filename1, O_RDONLY);
if (file1 == -1)
{
fprintf(stderr, "Can't read from file %s\n", filename1);
exit(98);
}
file2 = open(filename2, O_WRONLY | O_CREAT | O_TRUNC, 0644);
while ((file1_data = read(file1,buffer, sizeof(buffer))) > 0)
{
if (write(file2, buffer, file1_data) != file1_data)
{
fprintf(stderr, "Can't write to file %s\n", filename2);
exit(99);
}
}
close(file1);
if (close(file2) == -1)
{
fprintf(stderr, "Can't close fd %d\n", file2);
exit(100);
} 
return (1);
}

int main(int ac, char **av)
{
int res;
if (ac != 3)
{
fprintf(stderr, "Usage: cp %s %s\n", av[0]);
exit(97);
}
res = copy_to_file(av[1], av[2]);
return (res);
}
