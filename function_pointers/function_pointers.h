#ifndef function_pointers_h
#define function_pointers_h

void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));

#endif
