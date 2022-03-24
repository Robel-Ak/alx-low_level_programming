#include "main.h"
/**
* reverse_array - function that reverse array.
* @a: array.
* @n: array size.
*/
void reverse_array(int *a, int n)
{
    int i = 0, b;

    while (i < n)
    {
        n--;
        b = a[i];
        a[i] = a[n];
        a[n] = b;
        i++;
    }
}