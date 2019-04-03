#ifndef MY_FILE_IO
#define MY_FILE_IO

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif
