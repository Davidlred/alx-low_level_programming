#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer
 * @text_content: text to be added
 * Return: 1 if the file exists. -1 if the fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_dis;
	int size = 0;
	int allocated_space;

	if (filename == NULL)
		return (-1);

	file_dis = open(filename, O_WRONLY | O_APPEND);

	if (file_dis == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[size])
			size++;

		allocated_space = write(file_dis, text_content, size);

		if (allocated_space == -1)
			return (-1);
	}

	close(file_dis);

	return (1);
}

