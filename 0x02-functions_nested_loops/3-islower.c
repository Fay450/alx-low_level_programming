#include "main.h"

/**
 * _islower - functin to print lower case
 *
 * @c: parameter to be printed
 *
 * Return: 1 if is the lowe case
 * and 0  otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
