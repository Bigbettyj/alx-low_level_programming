#include "main.h"
/**
 * _strlen_recursion - checks if string is empty
 * @s: pointer to string
 * Return: recursion
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
/**
 * is_palindrome - checks if string is empty
 * @s: string
 * Return: returns 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (s < 0)
		return (1);
	else

