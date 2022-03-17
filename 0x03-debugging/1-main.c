#include <stdio.h>
/**
 * main - causes an infinte loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	 /*
	 * while (i < 10)
	 * {
<<<<<<< HEAD
	 *putchar(i);
=======
	 * putchar(i);
>>>>>>> 0b5a7468ca6e512add1f8aef2952766bd6f88183
	 * }
	 */

	printf("Infinite loop avoided! \\o/\n");
	return (0);
}
