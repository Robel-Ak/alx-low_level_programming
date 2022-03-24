#include "main.h"
/**
* leet - function that encodes a string.
* @s: string.
* Return: string.
*/
char *leet(char *s)
{
    int i = 0, j, k;
    char l[] = "oOlLeEaAtT";
    char e[] = "0011334477";

    while (s[i] != '\0')
    {
        j = 0;
        k = 0;
        while (l[j] != '\0')
        {
            if (s[i] == l[j])
            {
                k = j;
                s[i] = e[k];
            }
            j++;
        }
        i++;
    }
    return (s);
}