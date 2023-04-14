#include "main.h"

/**
 * append_text_to_file-Appends text at the end of a file.
 * @filename: pointer to the name of the file
 * @text_content: string to add the end of the file
 * Return: 1 if the file exists
 * -1 if the file does not exist or
 * if you do not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, count = 0;

	if (filename == NULL)
	{
		do {
			count++;
		} while (text_content[count] != '\0');
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, count);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
