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
if (text_content == NULL)
{
text_content == "";
}
while (text_content[bytes] != '\0')
{
bytes++;
}
file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (file == -1)
{
return (-1);
}
write_to = write(file, text_content, bytes);
if (write_to == -1)
{
return (-1);
}
return (1);
}
