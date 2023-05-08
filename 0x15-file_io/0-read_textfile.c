#include "main.h"

/**
 * read_textfile - This is a function that reads a text file and prints it
 *                to POSIX standard output.
 *
 * @filename: is the file to read
 * @letters: number of letters to read and print from file
 *
 * Return: success number or letters to print and failure return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t file_descriptor, charCount;
	char *buffer;

 	/* check if file exists */
	if (filename == NULL)
		return (0);

	/* open file in readonly mode */
	file = open(filename, O_RDONLY);

	/* return zero if failed to open file */
	if (file == -1)
		return (0);

	/* determine size of the buffer bassed on charcount*/
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	/* read file into file descriptor */
	file_descriptor = read(file, buffer, letters);

	/* return zero if read didn't succeed */
	if (file_descriptor == -1)
		return (0);

	charCount = write(STDOUT_FILENO, buffer, file_descriptor);
	if (charCount == -1 || file_descriptor != charCount)
		return (0);

	free(buffer);

	close(file);

	return (charCount);
}

