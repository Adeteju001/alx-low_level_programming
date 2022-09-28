#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry code
 * Return: returns 0
 */
int main(void)
{
	char alphabt;

	for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
		if (alphabt == 'e' || alphabt == 'q')
	putchar(alphabt);
	putchar('\n');
	return (0);
}
