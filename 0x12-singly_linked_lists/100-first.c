#include "lists.h"
#include <stdio.h>
/**
 * pre_main - function prints before main
 * Return: always 0
 */
void __attribute__((constructor)) pre_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}