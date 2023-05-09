#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: a pointer to a const char string.
 * @letters: a size_t integer gives the number of letters to read.
 * @textbuffer: used to temporarily store data read from the file.
 * return: number of letters or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fopen, fread, fwrite;
	char *textbuffer;

	textbuffer = malloc(letters);
	if (textbuffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fopen = open(filename, O_RDONLY);

	if (fopen == -1)
	{
		free(textbuffer);
		return (0);
	}

	fread = read(fopen, textbuffer, letters);

	fwrite = write(STDOUT_FILENO, textbuffer, fread);

	close(fopen);

	return (fwrite);
}
