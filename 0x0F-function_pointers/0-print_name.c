#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Entry point
 * @name: a character
 * @f: a function pointer
 * Return: NULL
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
