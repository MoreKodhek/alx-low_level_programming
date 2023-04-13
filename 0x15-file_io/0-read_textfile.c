#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * @filename: name of the file to be read
 * @letters: maximum number of letters
 *
 * Return: actual number of letters
 * if filename is NULL return 0
 * if write fails return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int mak;
	ssize_t count1, count2;
	char *buffer;

	if (!filename)
		return (0);

	mak = open(filename, O_RDONLY);
	if (mak == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	count1 = read(mak, buffer, letters);
	if (count1 == -1)
	{
		free(buffer);
		close(mak);
		return (0);
	}

	count2 = write(STDOUT_FILENO, buffer, count1);

	if (count2 == -1 || count1 != count2)
	{
		free(buffer);
		close(mak);
		return (0);
	}

	free(buffer);
	close(mak);

	return (count2);
}
