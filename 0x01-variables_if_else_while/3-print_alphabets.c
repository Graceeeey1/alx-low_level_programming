#include <stdio.h>
/**
 * main - A program to write in both upper and lower case
 * Return: 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar (ch);
	putchar('\n');
	return (0);
}
