#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
unsigned int binary_to_uint(const char *b);
unsigned int power(unsigned int counter);
void print_binary(unsigned long int n);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
#endif
