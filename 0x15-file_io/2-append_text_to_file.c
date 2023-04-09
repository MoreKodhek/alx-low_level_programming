#include "main.h"

/**
 * append_text_to_file - append text
 * @filename: name of the file
 * @text_content: add to the end of the file
 *
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int mak, status1 = -1, a = 0;

	if (filename == NULL)
		return (1);

	mak = open(filename, O_WRONLY | O_APPEND);

	if (mak != -1)
	{
		while (text_content[a] != '\0')
			a++;

		status1 = write(mak, text_content, a);
		if (status1 == -1)
			status1 = -1;

		if (close(mak) == -1)
			status1 = -1;
	}

	return (status1);
}
