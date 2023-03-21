#include "function_pointers.h"
/**
 * print_name - print the name
 * @name: name point
 * @f: f poin
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
