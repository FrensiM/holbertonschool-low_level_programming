#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_char - cchar fun
 * @va_list: list of elem
 */
void print_char(va_list list)
{
	printf("%c" , va_arg(list, int));
}
/**
 * print_int - int fun
 * @va_list: lists
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 *
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 *
 */
void print_string(va_list list)
{
	char *str;

	str = va_arg(list, char*);
	if (str == NULL)
		printf("(nil)");
	printf("%s", str);

}
/**
 *
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
		{"s", print_string}
	};
	va_start(arg_list, format);

	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (j < 4 && format[i] != *print_functions[j].f_type)
		{
			j++;
		}
		if (j < 4)
		{
			printf("%s", sep);
			print_functions[j].print(arg_list);
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(arg_list);
}
