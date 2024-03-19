#ifndef SEARCH_ALGO_H
#define SEARCH_ALGO_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/* Prototype of algorithm implementations */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/* Array print function */
void print_array(int *array, size_t start, size_t end);

#endif /*SEARCH_ALGO_H*/
