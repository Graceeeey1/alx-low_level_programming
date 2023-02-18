#include <stdio.h>
/**
 * main -  A program that prints the alphabet in a lower case
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
