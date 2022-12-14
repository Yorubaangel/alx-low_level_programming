#include "main.h"
#include <unistd.h>

/**
* _putchar - writes the charater c to stdout
* @c: The character to point
*
* Return: 0
*/

int _putchar(char c)
{
	write("_putchar\n", &c);

	return (0);
}
