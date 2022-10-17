#include "main.h"

/**
 * print_numbers - entry mode
 * Return: returns 0
 */

void print_numbers(void)
{
	int a;

	for ( a = '0'; a <= '9'; a++)
	{
		if ( a == '2' || a == '4')
			continue; 
		putchat(a);
	}
	_putchar('\n');
}
