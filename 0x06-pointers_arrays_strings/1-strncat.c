#include "main.h"

/**
* _strncat - Copies at most an inputted number
*	of bytes from string src into dest.
* @dest: The number storing the string copy.
* @src: The source string.
* @n: The maximum number of bytes to copied from src.
*
* Return: A pointer to the resulting string dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
