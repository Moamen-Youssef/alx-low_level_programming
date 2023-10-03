#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - check the code
 *@filename: ...<
 *@text_content: ...<
 * Return: 0...<
 */

int append_text_to_file(const char *filename, char *text_content)
{
int file;
int bytes = 0;
if (!filename)
{
return (-1);
}
while (text_content[bytes] != '\0')
{
bytes++;
}
file = open(filename, O_WRONLY | O_APPEND);
if (!file)
{
return (-1);
}
if (!text_content)
{
text_content = "";
return(1);
}
write(file, text_content, bytes);
return (1);
}
