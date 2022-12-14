#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: name to be printed
 * @f: pointer to the function
 * Return: Always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
