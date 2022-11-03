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
 * checkpan - palindrome
 * @s: pointer
 * @r: position
 * Return: result
 */
int checkpan(char *s, int r)
{
	if (r < 1)
	{
		return (1);
	}
	if (*s == *(s + r))
	{
		return (checkpan(s + 1, r - 2));
	}
	return (0);
}
/**
 * is_palindrome - checks if string is empty
 * @s: string
 * Return: returns 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (checkpan(s, len - 1));
}
