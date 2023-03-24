#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_char - cchar fun
 * @list: list of elem
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_int - int fun
 * @list: lists
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_float - un of floats
 * @list: list
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_string - main fun
 * @list: list
 */
void print_string(va_list list)
{
	char *str;

	str = va_arg(list, char*);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);

}
/**
 * print_all - print fun
 * @format: format type
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;
	va_list arg_list;
	char *sep = "";

	print_t print_functions[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_start(arg_list, format);

	if (format != NULL)
	{
		while ((format[i] != '\0'))
		{
			j = 0;
			while (j < 5 && format[i] != *print_functions[j].f_type)
			{
				j++;
			}
			printf("%s", sep);
			print_functions[j].print(arg_list);
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(arg_list);
}
