#ifndef _FILE_IO_
#define _FILE_IO_

#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>

int _strlen(char *s);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
void cp_file(const char *src, const char *destination);
int append_text_to_file(const char *filename, char *text_content);

#endif
