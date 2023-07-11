#include "main.h"
/**
 * read_textfile - a file that reads a file and outputs
 * @filename: pointer to file
 * @letters: number of bytes returned
 * Return: number of bytes read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_dis;
	unsigned int allocated_space;
	unsigned int size;
	char *buffer;


	if (filename == NULL)
		return (0);

	file_dis = open(filename, O_RDONLY);

	if (file_dis == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	size = read(file_dis, buffer, letters);
	allocated_space = write(STDOUT_FILENO, buffer, size);

	close(file_dis);

	free(buffer);

	return (allocated_space);
}
