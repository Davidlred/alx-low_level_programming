#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointr to file
 * @text_content: content of file
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file_dis;
	int size = 0;
	int allocated_space;

	if (filename == NULL)
		return (-1);

	file_dis = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_dis == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	while (text_content[size])
		size++;

	allocated_space = write(file_dis, text_content, size);

	if (allocated_space == -1)
		return (-1);

	close(file_dis);

	return (1);
}
