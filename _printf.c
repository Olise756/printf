#include "main.h"

/**
<<<<<<< HEAD
 * _printf - main printf function
 * @format: string parameter
 *
 * Return: count of characters in @format
=======
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Description: this function will call the get_print() function that will
 * determine which printing function to call depending on the conversion
 * specifiers contained into fmt
 * Return: length of the formatted output string
>>>>>>> bfd5d5fd1b495c3a909f3118d0196c87be9dbd6f
 */

int _printf(const char *format, ...)
{
<<<<<<< HEAD
	va_list args;
	const char *str;
	int (*func)(va_list, flag_t *, mod_t *);
	flag_t f = {0, 0, 0};
	mod_t m = {0, 0, 0};
	int i, count = 0, num = 0;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (str = format; *str; str++)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '%')
			{
				count += _putchar('%');
				continue;
			}
			for (; get_flags(*str, &f); str++)
			{}
			for (i = 0; *str >= 48 && *str <= 57; str++, i++)
				num = (num * (i * 10)) + (*str - '0');
			set_width(num, &m);
			for (; get_modifier(*str, &m); str++)
			{}
			func = get_func(*str);
			count += (func) ? func(args, &f, &m)
					: _printf("%%%c", *str);
		} else
			count += _putchar(*str);
	}
	_putchar(-1), va_end(args);
=======
	int (*pfunc)(va_list, flags_t *);

	const char *p;

	va_list arguments;

	flags_t flags = {0, 0, 0};

	register int count = 0;

	va_start(arguments, format);

	if (!format || (format[0] == '%' && !format[1]))

		return (-1);

	if (format[0] == '%' && format[1] == ' ' && !format[2])

		return (-1);

	for (p = format; *p; p++)

	{
		if (*p == '%')
		{
			p++;

			if (*p == '%')

			{
				count += _putchar('%');

				continue;

			}

			while (get_flag(*p, &flags))
				p++;

			pfunc = get_print(*p);

			count += (pfunc)

				? pfunc(arguments, &flags)

				: _printf("%%%c", *p);
		} else

			count += _putchar(*p);
	}

	_putchar(-1);

	va_end(arguments);

>>>>>>> bfd5d5fd1b495c3a909f3118d0196c87be9dbd6f
	return (count);
}
