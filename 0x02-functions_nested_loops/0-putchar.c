#include <unistd.h>
#include <main.h>
#include "main.h"
/**
 * main - A program that prints putchar
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 (Success)
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
