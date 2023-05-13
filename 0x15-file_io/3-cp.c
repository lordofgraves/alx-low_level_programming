#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
        exit(1);
    }

    FILE *in_file = fopen(argv[1], "rb");
    if (in_file == NULL)
    {
        fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
        exit(2);
    }

    FILE *out_file = fopen(argv[2], "wb");
    if (out_file == NULL)
    {
        fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
        exit(3);
    }

    char buffer[BUFFER_SIZE];

    size_t bytes_read;
    do
    {
        bytes_read = fread(buffer, 1, BUFFER_SIZE, in_file);
        if (ferror(in_file))
        {
            fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
            exit(2);
        }
        fwrite(buffer, 1, bytes_read, out_file);
        if (ferror(out_file))
        {
            fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
            exit(3);
        }
    } 
    while (bytes_read == BUFFER_SIZE);

    fclose(in_file);
    fclose(out_file);
    return 0;
}
