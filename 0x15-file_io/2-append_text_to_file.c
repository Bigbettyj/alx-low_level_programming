#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 * If filename is NULL return -1
 */
int append_text_to_file(const char *filename, char *text_content)
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
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, letters);

	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
