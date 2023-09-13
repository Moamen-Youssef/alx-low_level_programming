#include "3-calc.h"
#include <string.h>

op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
/**
 * get_op_func - function return pointer to function
 * @s: operand
 * Return: function to run.
*/
int (*get_op_func(char *s))(int, int)
{
while (ops[i].op != NULL)
{
if (strcmp(s, ops[i].op) == 0)
{
return (ops[i].f);
}
i++;
}
return (NULL);
}
