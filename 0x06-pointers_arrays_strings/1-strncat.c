#include "main.h"
#include <stdio.h>
/**
* _strncat - function that concatenates two strings.
* @src: source string.
* @dest: destination string.
* @n: number.
* Return: dest.
*/
char *_strncat(char *dest, char *src, int n)
{
    int index = strlen(dest);
    int a = 0;

    while (a < n && *src)
    {
        dest[index + a] = *src;
        src++;
        a++;
    }
    dest[index + a] = '\0';
    return (dest);
}