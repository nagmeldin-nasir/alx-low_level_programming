#include "main.h"

/**
 *_islower - function to check if
 * character is lower case
 *
 * @c: checks input of function
 *
 *Description: Return: returns 1 if 'c' is lower case
 * other wise always 0 (Success)
 *
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	return (1);
	return (0);
}
