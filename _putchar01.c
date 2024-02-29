#include <unistd.h>

/**
 * _putchar - writes the char to stdout in the code
 *
 * @c: The character to code
 *
 * Return: On success 1. or 0
 *
 * On error, -1 is returned, and error is set appropriately.
 *
 */

int _putchar(char c)

{

	return (write(1, &c, 1));

}
