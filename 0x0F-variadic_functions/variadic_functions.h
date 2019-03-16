#ifndef MY_GUARDED
#define MY_GUARDED

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int int_index(int *array, int size, int (*cmp)(int));

#endif
