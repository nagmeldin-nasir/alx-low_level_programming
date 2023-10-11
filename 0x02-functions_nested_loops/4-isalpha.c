#include "main.h"

/**
 * _isalpha - description: checks if character is letter
 * both lowercase are uppercase
 *
 * @c: takes input from other functions
 * _isalpha Returne: 1 is c if true (Success) else 0
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
