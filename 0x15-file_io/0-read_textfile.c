#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: a pointer to a const char string.
 * @letters: a size_t integer gives the number of letters to read.
 * @textbuffer: used to temporarily store data read from the file.
 * return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *textbuffer;
	int fopen;
	ssize_t fread, fwrite, fclose;

	if (filename == NULL)
	{
		return (0);
	}

	textbuffer = malloc(sizeof(char) * letters);
	if (textbuffer == NULL)
	{
		return (0);
	}

	fopen = open(filename, O_RDONLY);

	if (fopen == -1)
	{
		free(textbuffer);
		return (0);
	}

	fread = read(fopen, textbuffer, letters);

	if (fread == -1)
	{
		return (-1);
	}

	fwrite = write(STDOUT_FILENO, textbuffer, fread);

	if (fwrite == -1)
	{
		return (-1);
	}

	fclose = close(fopen);

	if (fclose == -1)
	{
		return (-1);
	}

	return (fread);
}
