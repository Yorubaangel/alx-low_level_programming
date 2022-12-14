#include "main.h"

/**
* print_alphabet_x10 - Entry point
*
* Return: 0
*/

void print_alphabet_x10(void)
{
	int x;
	char y;

	for (x = 0; x < 10; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
