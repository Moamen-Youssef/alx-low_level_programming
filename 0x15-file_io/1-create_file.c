#include "main.h"
#include <stdlib.h>
/**
 * create_file - check the code
 *@filename: .....>
 *@text_content: .....>
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{
int file;
int write_to;
if (!filename)
{
return (-1);
}
file = open(filename, O_WRONLY | O_CREAT);
if (file == -1)
{
return (-1);
}
if (text_content == NULL)
{
close(file);
return (1);
}
write_to = write(STDOUT_FILENO, text_content, file);
if (write_to == -1)
{
return (-1);
}
return (1);
}
