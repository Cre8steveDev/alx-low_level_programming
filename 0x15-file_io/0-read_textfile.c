#include "main.h"

/**
 * read_textfile - Reads the text file
 * @filename: String containing file name
 * @letters: Number of letters to be printed
 * Return: -1 and above positive numbers
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_printed;
	ssize_t num_read;
	int openFile;
	char *readStr = malloc((letters + 1) * sizeof(char));

	if (!filename)
		return (0);

	openFile = open(filename, O_RDONLY);
	if (openFile == -1)
		return (0);

	num_read = read(openFile, readStr, letters);
	if (num_read == -1)
		return (0);

	num_printed = write(STDIN_FILENO, readStr, num_read);
	if (num_printed == -1)
	{
		free(readStr);
		return (0);
	}

	free(readStr);

	return (num_printed);
}
