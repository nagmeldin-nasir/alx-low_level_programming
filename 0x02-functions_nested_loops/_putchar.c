#include <unistd.h>
#include "main.h"

/**
 *
 * _putchar - writs the character C to stdout
 *
 * @c : the chararcter to print
 *
 * Returne: on success 1.
 * on error, -1 is returned, and errnois set appropriately
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

