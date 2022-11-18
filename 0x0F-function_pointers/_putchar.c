#include <unistd.h>
/**
 * _putchar - prints the character c to stdout
 * @c: the character to be printed
 * Return: Always 1 on success, else -1
 */
int _putchar(char)
{
	return (write(1, &c, 1));
}
