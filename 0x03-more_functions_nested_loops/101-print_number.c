#include "holberton.h"

/**
 * print_triangle -  function that prints a triangle
 *
 * @size : Variable
 *
 */
void print_number(int n)
{
    int m, o;
    if (n < 0) {
        n = n *(-1);
        _putchar('-');
    }
    if (n / 1000 != 0)
        _putchar(n / 1000 + '0');
    m = n % 1000;
    if (n / 100 != 0)
        _putchar(m / 100 + '0');
    o = m % 100;
    if (n / 10 != 0)
        _putchar(o / 10 + '0');
    _putchar(o % 10 + '0');
}
