#include "main.h"
/**
* print_last_digit -> prnts the last digit
* @n: th passed arg
* Return: the last digit
*/

int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}
