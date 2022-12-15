#include "main.h"
/**
* _isdigit - check for digit 0 through 9
* @c: prints int
* Return: returns 0 and 1
*/

int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
