#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: a pointer to a const char string.
 * @letters: a size_t integer gives the number of letters to read.
 * @fp: used to access the file.
 * @textbuffer: used to temporarily store data read from the file.
 * @total_read: total number of bytes read.
 * @n_read: store the number of bytes read by fread.
 * return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE* fp;
    char textbuffer[2048];
    ssize_t total_read = 0, n_read;

    if (filename == NULL)
    {
        printf("Error: the filename is NULL\n");
        return (0);
    }

    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Error: can't open file %s\n", filename);
        return (0);
    }

    while ((n_read = fread(textbuffer, 1, sizeof(textbuffer), fp)) > 0)
    {
        total_read += n_read;
        if (fwrite(textbuffer, 1, n_read, stdout) != n_read)
        {
            printf("Error: write is failed\n");
            fclose(fp);
            return (0);
        }
        if (total_read >= letters) break;
    }

    fclose(fp);
    return total_read;
}
