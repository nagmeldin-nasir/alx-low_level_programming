#include <unistd.h>

/**
 *_putchar - writes the  character c to student
 *@c: the character to print
 *
 *Return: on succes 1.
 *on error, -1 is returned , errno is set appropriately
 *
 *
 * */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
