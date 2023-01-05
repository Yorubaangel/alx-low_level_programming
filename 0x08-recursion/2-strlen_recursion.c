#include "main.h"

/**
* _strlen_recursion - This is to print the lenght of a string
* @s: The string lenght to be printed
*
* Return: 0
*/

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
