#include <unistd.h>
/**
 * main - printing text without printf
 * Return:1
 */

int main(void)
{
write(2,
"and that piece of art is useful\" - Dora Korpar, 2015-10-19"
, 95);
return (1);
}
