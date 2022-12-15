#include "main.h"

/**
* print_numbers - Function that list out nuber 0 to 9
*
* Return: Always 0.
*/

void print_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
	_putchar (n + '0');
	n++;
	}
	_putchar ('\n');
}
