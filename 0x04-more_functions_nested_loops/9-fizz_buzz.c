/**
 * print_square - Fizz Buzz code
 * Return:nothing
*/
void fizz_buzz(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 1)
{
printf("Fizz ");
}
if(i % 5)
{
printf("Buzz ");
}
printf("%d ", i);
}
printf("\n");
}
