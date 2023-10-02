#include "main.h"
#include <unistd.h>
#include <stdlib.h>
/**
 * create_file - check the code
 *@filename: .....>
 *@text_content: .....>
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{
int file, bytes = 0;
int write_to;
if (!filename)
{
return (-1);
}
file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (file == -1)
{
return (-1);
}
if (text_content == NULL)
{
close(file);
return (1);
}
while (text_content[0] != "\0")
{
bytes++;
}

write_to = write(STDOUT_FILENO, text_content, bytes);
if (write_to == -1)
{
return (-1);
}
return (1);
}
