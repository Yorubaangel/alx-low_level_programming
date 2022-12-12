#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
int x = 'a';

	for (x = 'a'; x <= 'z'; x = x + 1)
	{
		if (x != 'e' && x != 'q')
		putchar(x);
	}
	putchar('\n');

	return (0);
}
