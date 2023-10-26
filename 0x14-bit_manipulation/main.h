#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

int _putcha(char b);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
void print_bnry(unsigned long int n);
int get_bit(unsigned long int h, unsigned int indx);
int set_bit(unsigned long int *h, unsigned int indx);
int clear_bit(unsigned long int *h, unsigned int indx);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);


#endif
