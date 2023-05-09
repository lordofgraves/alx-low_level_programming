#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: a pointer to a const char string.
 * @letters: a size_t integer gives the number of letters to read.
 * @fp: used to access the file.
 * @textbuffer: used to temporarily store data read from the file.
 * return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE* fp;
    char textbuffer[2048];
    int fopen;
    ssize_t fread, fwrite, fclose;
    
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Error: can't open file\n");
        return (0);
    }
    fread = 0;
    while ((fread = fread(textbuffer, 1, sizeof(textbuffer), fp)) > 0)
    {
        fwrite = fwrite(textbuffer, 1, fread, stdout);
        if (fwrite < 0)
        {
            printf("Error: can't write to stdout\n");
            return (0);
        }
    }
    
    fclose = fclose(fp);
    if (fclose != 0)
    {
        printf("Error: can't close the file\n");
        return (0);
    }
    return (fread);
}
