#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: the name of the file to create.
 * @text_content: what to write to the file.
 *
 * return: 1 if success, -1 if fail.
 */
int create_file(const char *filename, char *text_content){
	int fd, num_written;

	if(filename == NULL){
		return -1;
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if(fd == -1){
		return -1;
	}

	if(text_content != NULL){
		num_written = write(fd, text_content, strlen(text_content));
		if(num_written == -1){
			close(fd);
			return -1;
		}
	}
	close(fd);
	return 1;
}
