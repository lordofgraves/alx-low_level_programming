#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <string.h>

#define BUFFER_SIZE 2048
/**
 * error_handler - handle errors.
 * @msg: message after the error.
 * @c: store the error code used, 97,98,99.
 */
void error_handler(const char *msg, int c);
/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments.
 * @argv: array that represent the arguments themselves.
 */
int main(int argc, char **argv);

void error_handler(const char *msg, int c) {
        fprintf(stderr, "%s", msg);
        exit(c);
}

int main(int argc, char **argv){
	if(argc != 3){
		error_handler("Usage: cp file_from file_to\n", 97);
	}

	const char *file_from = argv[1];
	const char *file_to = argv[2];

	int fd_from = open(file_from, O_RDONLY);
	if(fd_from == -1) {
		char msg[100];
		snprintf(msg, sizeof(msg), "Error: Can't read from file %s\n", file_from);
		error_handler(msg, 98);
	}

	int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if(fd_to == -1) {
		char msg[100];
		snprintf(msg, sizeof(msg), "Error: Can't write to file %s\n", file_to);
		error_handler(msg, 99);
	}

	char buffer[BUFFER_SIZE];
        ssize_t bytes_read;
        ssize_t bytes_written;

	while((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0){
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read){
			error_handler("Error: Write error occurred\n", 99);
		}
	}
	if(bytes_read < 0){
		error_handler("Error: Read error occurred\n", 98);
	}
	if(close(fd_from) == -1){
		error_handler("Error: Can't close file descriptor for file_from\n", 100);
	}
	if(close(fd_to) == -1){
		error_handler("Error: Can't close file descriptor for file_to\n", 100);
	}
	return 0;
}
