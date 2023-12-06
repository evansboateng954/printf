#include "main.h"
#include <unistd.h>
/**
 * _printf - writes to the standart ouput strem 
 * based on a given format
 *
 * @format: the format to display the output
 * Return: the number of characters to be printed
 */

int _printf(const char *format, ...)
{
	int len = 0;
	va_list ap;
	int i = 0;
	char specifier;

	va_start(ap, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				specifier = va_arg(ap, int);
				_putchar(specifier);
				len++;
				i++;
			}
		}

		_putchar(format[i]);
		len++;
		++i;
	}
	va_end(ap);
	return (len);
}
