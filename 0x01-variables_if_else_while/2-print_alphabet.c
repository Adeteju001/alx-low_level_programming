#include<stdio.h>
/**
 * main - Entry mode
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha; 
	alpha = 'a'; 
	while (alpha <= 'z') 
	{
		printf("%c", alpha); 
		alpha++; 
	}
	printf("\n"); 
	return (0); 
}
