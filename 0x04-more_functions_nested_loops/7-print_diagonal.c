#include "main.h"

/**
* print_diagonal - check the code
* @n: print int
* Return: Always 0.
*/

void print_diagonal(int n)
{
	int i;
	int b;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (b = 0; b < i; b++)
			{
				_putchar (' ');
			}
			_putchar (92);
			_putchar ('\n');
		}
	}
}
