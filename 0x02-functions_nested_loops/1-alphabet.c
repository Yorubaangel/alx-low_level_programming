#include "main.h"

/**
* print_alphabet - Entry point
*
* Return: 0
*/

void print_alphabet(void)
{
	char N = 'a';

	while (N <= 'z')
	{
		_putchar(N);
		N++;
	}

	_putchar('\n');
}
