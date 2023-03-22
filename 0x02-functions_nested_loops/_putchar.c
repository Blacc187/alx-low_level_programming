#include <unistd.h>

/**
 * _putchar writes the character c to stdou
 * @c the character to print
 *
 * Return at sucess 1,
 * on error, -1, and errno is set appropriately.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
