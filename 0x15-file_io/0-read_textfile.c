#include "main.h"
/**
*read_textfile - This reads a text file and prints
*the POSIX
*@filename: name of file to be read
*@letters: number of letters to be read and printed
*Return: actual number of letters it could read and write
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int file_i;
ssize_t len_read, len_write;
char *buffer;
if (filename == NULL)
return (0);
file_i = open(filename, O_RDONLY);
if (file_i == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(file_i);
return (0);
}
len_read = read(file_i, buffer, letters);
close(file_i);
if (len_read == -1)
{
free(buffer);
return (0);
}
len_write = write(STDOUT_FILENO, buffer, len_read);
free(buffer);
if (len_read != len_write)
return (0);
return (len_write);
}
