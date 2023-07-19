#include <stddef.h>

#ifndef FUNCTION_TO_POINTER_H
#define FUNCTION_TO_POINTER_H

void print_name(char *name, void (*f)(char *));
void _putchar(char *c);
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
