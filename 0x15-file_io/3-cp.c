#include "main.h"
#include <stdio.h>
/**
 * err_file - checks file
 * @file_from: first file
 * @file_to: second file
 * @argv: argument vector
 * Return: Always 0.
 */
void err_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - copies the content of a file to another file
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t count, w;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	err_file(file_from, file_to, argv);

	count = 1024;
	while (count == 1024)
	{
		count = read(file_from, buffer, 1024);
		if (count == -1)
			err_file(-1, 0, argv);
		w = write(file_to, buffer, count);
		if (w == -1)
			err_file(0, -1, argv);
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
