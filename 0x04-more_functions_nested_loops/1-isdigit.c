#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: int to be checked
 * Return: if 1 is an int and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
