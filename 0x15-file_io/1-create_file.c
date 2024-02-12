#include "main.h"
/**
*create_file - this program creates a file
*@filename: filename
*@text_content: written content in the file
*Return: 1 if success, -1 if error
*/
int create_file(const char *filename, char *text_content)
{
int file_i;
int n_letters;
int rwr;
if (!filename)
return (-1);
file_i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (file_i == -1)
return (-1);
if (!text_content)
text_content = "";
for (n_letters = 0; text_content[n_letters]; n_letters++)
;
rwr = write(file_i, text_content, n_letters);
if (rwr == -1)
return (-1);
close(file_i);
return (1);
}
