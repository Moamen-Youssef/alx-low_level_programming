#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - >....
 * @ac: >....
 * @av: >....
 * Return: >......
 */

char *argstostr(int ac, char **av)
{
int i;
int len = 0;
char *str;
if (ac == 0 || av == NULL)
{
return (NULL);
}
if (ac == 1)
{
return (av[0]);
}
for (i = 0; i < ac; i++)
{
len += strlen(av[i]);
}
str = malloc(sizeof(char) * len);
if (str == NULL)
{
return (NULL);
}
strcpy(str, strcat(av[1], "\n"));
for (i = 2; i < ac; i++)
{
strcat(av[i], "\n");
strcat(str, av[i]);
}
return (str);
}
