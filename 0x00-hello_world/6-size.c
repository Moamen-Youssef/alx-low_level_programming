#include <stdio.h>
/**
 * main - printing size of data types
 * Return:0
 */

int main(void)
{
char char_type;
int int_type;
long int long_int_type;
long long int long_long_int_type;
float float_type;
printf("Size of a char: %u byte(s)\n", 
sizeof(char_type)) ;
printf("Size of a int: %u byte(s)\n",
sizeof(int_type)) ;
printf("Size of a long int: %lu byte(s)\n",
sizeof(long_int_type)) ;
printf("Size of a long long int: %llu byte(s)\n",
sizeof(long_long_int_type)) ;
printf("Size of a flaot: %u byte(s)",
sizeof(float_type)) ;
return (0) ;
}
