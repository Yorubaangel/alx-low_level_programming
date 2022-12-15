#include "main.h"
/**
* _isdigit - check for digit 0 through 9
* @c: prints int
* Return: returns 1 if upppercase , 0 if not
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	return (1);

	return (0);
}
