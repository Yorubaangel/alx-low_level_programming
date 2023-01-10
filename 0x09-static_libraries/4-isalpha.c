#include "main.h"

/**
* _isalpha - checks alphebetical letters
* @c: a character to be checked on
* Return: returns 0 and 1 depemding on condition
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	return (0);
}
