#include "main.h"
#include <string.h>

/**
 * append_text_to_file - append text
 * @filename: name of the file
 * @text_content: add to the end of the file
 *
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, res, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	len = strlen(text_content);

	res = write(fd, text_content, len);

	if (res == -1)
		return (-1);

	res = close(fd);

	if (res == -1)
		return (-1);

	return (1);
}
