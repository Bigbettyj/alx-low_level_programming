#include "main.h"
#include <stdlib.h>
/**
 * word_len - locates index
 * @str: the string
 * Return: index markin
 */
int word_len(char *str)
{
	int index = 0;
	int len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}
/**
 * word_count - counts the number of word in a string
 * @str: the string
 * Return: number of words
 */
int word_count(char *str)
{
	int index = 0;
	int words = 0;
	int len = 0;

	for (index = 0; *(str + index); index++)
		len++;
	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
	return (words);
}
/**
 * strtow - splits a string into words
 * @str: string
 * Return: NULL if successful, else NULL
 */
char **strtow(char *str)
{
	char **stri;
	int index = 0;
	int words, c, a, b;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = count_word(str);
	if (words == 0)
		return (NULL);
	stri = malloc(sizeof(char *) * (words + 1));
	if (stri == NULL)
		return (NULL);
	for (c = 0; c < words; c++)
	{
		while (str[index] == ' ')
			index++;
		a = word_len(str + index);
		stri[c] = malloc(sizeof(char) * (a + 1));
		if (stri[c] == NULL)
		{
			for (; c >= 0; c--)
				free(stri[c]);
			free(stri);
			return (NULL);
		}
		for (b = 0; b < a; b++)
			stri[c][b] = str[index++];
		stri[c][b] = '\0';
	}
	stri[c] = NULL;
	return (stri);
}
