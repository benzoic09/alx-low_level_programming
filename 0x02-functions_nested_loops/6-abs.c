#include "main.h"
#include <stdio.h>

/**
 * _abs - function that computes the absolute value of an integer.
 * @n: the interger on which to compute
 * Return: The absolute value of n.
 */
int _abs(int n)
{
if (n < 0)
	return (-n);
else
	return (n);
}
