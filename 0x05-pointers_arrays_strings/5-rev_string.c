#include "main.h"

/**
 * rev_string - reverses a string
 *
 *@c: string parameter input
 *
 *Return: nothing
 *
*/

void rev_string(char *s)
{
	int l, i;
	char temp;

	/*find string without null char */

	for (l = 0; s[l] != '\0'; ++l)
/* swap the string by looping to half the string*/
for (i = 0; i < l / 2; i++)
{
	temp = s[i];
	s[i] = s[l - 1 - i]; /*_1 because the array starts from 0*/
	s[l - 1 - i] = temp;
}
}
