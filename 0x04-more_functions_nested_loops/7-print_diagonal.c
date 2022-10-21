#include "main.h"

/**
 * print_diagonal - drawsa diagonal line
 * @n: numbers of '\' to be printed
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < 0; y++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}