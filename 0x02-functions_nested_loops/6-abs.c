#include "main.h"
#include <stdio.h>

/**
 * _abs - main code
 * @int:returns a number
 * @n: the interger on which to compute
 * function that computes the absolute value of an integer.
 * Return: Always 0.
 */
int _abs(int n)
{
if (n < 0)
	return (-n);
else
	return (n);
}
