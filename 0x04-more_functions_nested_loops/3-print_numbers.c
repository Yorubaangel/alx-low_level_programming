#include "main.h"

/**
* print_numbers - Function that list out nuber 0 to 9
*
* Return: Always 0.
*/

void print_numbers(void)
{
	int n;

	for (n = '0'; n < 10; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
