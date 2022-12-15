#include "main.h"

/**
* _isupper - check for upper case character.
* @c: print int
* Return: returns 1 or 0
*/

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

