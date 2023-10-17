#include "main.h"

/**
 * _strlen - function
 * @s: parameter
 * Return: returns count
 */

int _strlen(char *s)
{

	int count = 0;

	while (s[count])
		count++;

	return (count);
}
