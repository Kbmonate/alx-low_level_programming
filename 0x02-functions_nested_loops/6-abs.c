#include "main.h"

/**
 * _absc - computes the absolute value of an integer
 * @c: The number to be counted
 * Return: Absolute value of a number or 0
 */

int _abs(int c)
{	
	if (c < 0)
	{
	int absValue;

	absValue = c * -1;
	return (absValue);
	}
	return (c);

}
