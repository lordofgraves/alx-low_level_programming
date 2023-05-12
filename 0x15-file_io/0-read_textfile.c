#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: name of the file.
 * @letters: maximum number of characters to read.
 * return: number of letters it could read and print
 * or 0
 */
ssize_t read_textfile(const char *filename, size_t letters) {
	int fd, num_read;
	char *buffer;

	if(filename == NULL){
		return 0;
	}

	fd = open(filename, O_RDONLY);
	if(fd == -1){
		return 0;
	}

	buffer = malloc(letters);
	if(buffer == NULL){
		close(fd);
		return 0;
	}

	num_read = read(fd, buffer, letters);
	if(num_read == -1){
		free(buffer);
		close(fd);
		return 0;
	}

	if(num_read == 0){
		free(buffer);
		close(fd);
		return 0;
	}

	if(write(STDOUT_FILENO, buffer, num_read) != num_read){
		free(buffer);
		close(fd);
		return 0;
	}

	free(buffer);
	close(fd);
	return (num_read);
}
