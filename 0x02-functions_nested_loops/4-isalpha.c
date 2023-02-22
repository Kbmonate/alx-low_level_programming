#include "main.h"

/**
 *_isalpha - checks if char is aphabetic
 *@c : is the charactr received
 *Return : 1 is char is alphabetic and 0 other
 */

int _isalpha(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}
