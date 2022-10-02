#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry code
 * Return: returns 0
 */
int main(void)
{
	int a, b;

		for (a = '0'; a <= '8'; a++)
		{
			for (b = a + 1; b <= '9'; b++)
			{
				if ( a == b)
					continue;
				putchar(a);
				putchar(b);
				if (a == '8' && b == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
