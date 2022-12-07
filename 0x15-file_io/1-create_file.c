#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int letters, o, w;

	if (filename == NULL)
		return (-1);

	letters = 0;
	if (text_content != NULL)
	{
		for (letters = 0; text_content[letters];)
			letters++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, letters);

	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
