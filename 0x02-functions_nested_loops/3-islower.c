#include "main.h"
/**
 * _islower - checks for lower character
 * @c: a character
 * Return: 1 (lowercase) 0 (if otherwise)
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

