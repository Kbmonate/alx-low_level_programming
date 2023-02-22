#include "main.h"

/**
 *_islower - checks for lowercase
 *@c: is the character to be checked
 *Returns: 1 for lower and 0 for higher
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

