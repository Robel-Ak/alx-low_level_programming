#include "main.h"
/**
 * print_last_digit - prints the last digit num
 * @n: to find the last place of the number
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (n < 0)
		n = n * -1;
	else
		_putchar(l + '0');
	return (l);
}
