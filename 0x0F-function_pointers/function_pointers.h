#ifndef FUNCTION_POINTERS_HEADER_FILE
#define FUNCTION_POINTERS_HEADER_FILE
#include <stddef.h>
void print_name(char *name, void (*f)(char *));
#endif
