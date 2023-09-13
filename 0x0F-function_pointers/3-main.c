#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[])
{
int result;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (strcmp(argv[2], "+") != 0 &&
strcmp(argv[2], "-") != 0 &&
strcmp(argv[2], "*") != 0 &&
strcmp(argv[2], "/") != 0 &&
strcmp(argv[2], "%") != 0)
{
printf("Error\n");
exit(99);
}
if ((strcmp(argv[2], "/") == 0 ||
strcmp(argv[2], "%") == 0) && 
(atoi(argv[3])) == 0)
{
printf("Error\n");
exit(100);
}
result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", result);
return (result);
}