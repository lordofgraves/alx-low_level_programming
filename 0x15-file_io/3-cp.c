#include "main.h"

/**
 * main - it copies what's in a file to another
 * @argc: number of argument
 * @argv: string arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	int num1 = 1024, num2 = 0;
	char buf[1024];

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(1);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(1);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_to == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		exit(1);
	}

	while ((num1 = read(file_from, buf, sizeof(buf))) > 0)
	{
		num2 = write(file_to, buf, num1);
		if (num2 < num1)
		{
			fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
			exit(1);
		}
	}

	if (num1 == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(1);
	}

	if (close(file_from) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", file_from);
		exit(1);
	}

	if (close(file_to) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", file_to);
		exit(1);
	}

	return 0;
}
