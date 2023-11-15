#include <unistd.h>

/**
 * _putchar - putchar
 * c: output
 * This is my putchar.c
 * Return: Output
 */

int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
