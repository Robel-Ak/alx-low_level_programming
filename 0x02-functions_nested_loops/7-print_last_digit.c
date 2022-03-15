#include "main.h"
/**
 * print_last_digit - prints the last digit num
 * @n: to find the last place of the number
 * Return: the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -1 * n;	
	_putchar('0' + ( n % 10));
	return (n % 10);
}
