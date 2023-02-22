#include "main.h"

/**
 *_islower - checks for lowercase
 *Returns: 1 for lower and 0 for higher
 *@c: character
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

