#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long ll;
	float f;

	printf("Size of a char: %ld byte(s)\n", (unsigned int) sizeof (c));
	printf("Size of a int: %ld byte(s)\n", (unsigned int) sizeof (i));
	printf("Size of a long int: %ld byte(s)\n", (unsigned int) sizeof (li));
	printf("size of a long long int: %ld byte(s)\n", (unsigned int) sizeof (ll));
	printf("Size of float: %ld byte(s)\n", (unsigned int) sizeof (f));
	return (0);
}
