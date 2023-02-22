#include "main.h"

/**
 * print_last_digit - prints the las digit
 * @n: the number parsed
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int number;
	
	number = n % 10;
	if (number < 0)
	{
	number = number * -1;
	}
	_putchar(number + '0');
	return (number);
}
