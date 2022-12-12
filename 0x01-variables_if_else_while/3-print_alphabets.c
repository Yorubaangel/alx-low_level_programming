#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
int n = 'a';
int x = 'z';

for (n = 'a'; n <= 'z'; n++)
	putchar(n);

for (x = 'A'; x <= 'Z'; x++)
	putchar(x);

putchar('\n');

return (0);
}
