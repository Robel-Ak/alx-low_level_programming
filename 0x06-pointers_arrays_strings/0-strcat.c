#include "main.h"
#include <stdio.h>
/**
* _strcat - function that concatenates two strings.
* @src: source string.
* @dest: destination string.
* Return: dest.
*/
char *_strcat(char *dest, char *src)
{
    char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}