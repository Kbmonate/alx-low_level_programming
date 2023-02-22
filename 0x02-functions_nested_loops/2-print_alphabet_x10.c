#include "main.h"

/**
 *print_alphabet_x10 - prints 10 time alphabet
 *Return: void
 */

void print_alphabet_x10(void)
{
	char ch;
	int i = 0;
	int x = 9;

	while (i <= x)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
	i++;
	}

}
