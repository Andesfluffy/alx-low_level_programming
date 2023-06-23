#include "main.h"

/**
 * print_triangle - Prints a triangle using the '#' character
 * @size: The size of the triangle
 *
 * Description: If size is 0 or less, only a new line is printed
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n'); /* Print new line for size <= 0 */
		return;
	}

	for (int row = 1; row <= size; row++)
	{
		/* Print spaces for each row */
		for (int space = 1; space <= size - row; space++)
		{
			_putchar(' ');
		}

		/* Print '#' characters for each row */
		for (int col = 1; col <= row; col++)
		{
			_putchar('#');
		}

		_putchar('\n'); /* Move to the next line after each row */
	}
}
