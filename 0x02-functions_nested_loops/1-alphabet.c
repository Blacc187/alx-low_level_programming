#include "main.h"

/**
 * print_alphabet - function that prints lowercase alphabets
 *
 * Description: This function prints the lowercase alphabets
 *              in the standard output
 *
 * Return: void
 */
void print_alphabet(void)
{
	 char i;

	for (i = 'a'; i <= 'z'; i++)
	{
	_putchar(i);
	}

	 _putchar('\n');
}

