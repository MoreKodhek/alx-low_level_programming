#include "main.h"

/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: string
 *
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int mak, status1;
	size_t j = 0;

	if (filename == NULL)
		return (-1);

	mak = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (mak == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[j])
			j++;
		status1 = write(mak, text_content, j);
		if (status1 == -1)
		{
			close(mak);
			return (-1);
		}
	}

	close(mak);
	return (1);
}
