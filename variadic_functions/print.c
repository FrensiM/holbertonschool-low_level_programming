/**
 * print_sting - print
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
