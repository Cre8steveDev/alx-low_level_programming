#include "main.h"

/**
 * read_textfile - Reads the text file
 * @filename: String containing file name
 * @letters: Number of letters to be printed
 * Return: -1 and above positive numbers
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_printed, num_read, openFile;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc((letters) * sizeof(char));
	if (buffer == NULL)
		return (0);

	openFile = open(filename, O_RDONLY);
	num_read = read(openFile, buffer, letters);
	num_printed = write(STDIN_FILENO, buffer, (size_t)num_read);

	if (num_printed != num_read)
	{
		free(buffer);
		close(openFile);
		return (0);
	}

	close(openFile);
	return (num_printed);
}
