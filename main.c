<<<<<<< HEAD:main.h
#ifndef _MAIN_H_
#define _MAIN_H_

=======
#ifndef MAIN_H

#define MAIN_H
<<<<<<< HEAD:main.c


#include <stdlib.h>

=======
>>>>>>> e9823c82a35831edae215e4c3c30c91bd5081d55:main.h
>>>>>>> bfd5d5fd1b495c3a909f3118d0196c87be9dbd6f:main.c
#include <stdarg.h>
#include <unistd.h>
<<<<<<< HEAD:main.h
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>
=======

<<<<<<< HEAD:main.c


/**

 * struct flags - struct containing flags to "turn on"

 * when a flag specifier is passed to _printf()

 * @plus: flag for the '+' character

 * @space: flag for the ' ' character

 * @hash: flag for the '#' character

 */



typedef struct flags

{

	int plus;

	int space;
=======
#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024
>>>>>>> e9823c82a35831edae215e4c3c30c91bd5081d55:main.h

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1
>>>>>>> bfd5d5fd1b495c3a909f3118d0196c87be9dbd6f:main.c


/**
<<<<<<< HEAD:main.h
 * struct flags - struct for flags
 * struct modifiers - struct for modifiers
 * struct identifiers - struct for identifiers
=======
<<<<<<< HEAD:main.c

 * struct printHandler - struct to choose the right function depending

 * on the format specifier passed to _printf()

 * @c: format specifier

 * @f: pointer to the correct printing function

 */



typedef struct printHandler

{

	char c;

	int (*f)(va_list ap, flags_t *f);

} ph;



/* print_nums */



int print_int(va_list l, flags_t *f);

void print_number(int n);

int print_unsigned(va_list l, flags_t *f);

int count_digit(int i);



/* print_bases */



int print_hex(va_list l, flags_t *f);

int print_hex_big(va_list l, flags_t *f);

int print_binary(va_list l, flags_t *f);

int print_octal(va_list l, flags_t *f);



/* converter */

char *convert(unsigned long int num, int base, int lowercase);



/* _printf */
=======
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
>>>>>>> bfd5d5fd1b495c3a909f3118d0196c87be9dbd6f:main.c
 */

typedef struct flags
{
	int plus;
	int space;
	int hash;
} flag_t;

typedef struct modifiers
{
	int l;
	int h;
	int width;
} mod_t;

<<<<<<< HEAD:main.h
typedef struct identifiers
{
	char symbol;
	int (*func)(va_list, flag_t *, mod_t *);
} id;
=======
/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */
typedef struct fmt fmt_t;
>>>>>>> e9823c82a35831edae215e4c3c30c91bd5081d55:main.h
>>>>>>> bfd5d5fd1b495c3a909f3118d0196c87be9dbd6f:main.c

int _printf(const char *format, ...);

int _putchar(char c);
int _puts(char *str);

int _print_char(va_list, flag_t *, mod_t *);
int _print_str(va_list, flag_t *, mod_t *);
int _print_specifier(va_list, flag_t *, mod_t *);

int  _print_dec(va_list, flag_t *, mod_t *);

void print_number(long n);
int count_digits(long n);
char *convert(unsigned long num, int base, int lowercase);

int _print_binary(va_list, flag_t *, mod_t *);
int _print_hexa_upper(va_list, flag_t *, mod_t *);
int _print_hexa_lower(va_list, flag_t *, mod_t *);
int _print_octal(va_list, flag_t *, mod_t *);
int _print_unsigned(va_list, flag_t *, mod_t *);
int _print_address(va_list, flag_t *, mod_t *);
int _print_percent(va_list, flag_t *, mod_t *);
int _print_reverse(va_list, flag_t *, mod_t *);
int _print_rot13(va_list, flag_t *, mod_t *);

/* Generate function pointer */
int (*get_func(char c))(va_list, flag_t *, mod_t *);

/* Set flags */
int get_flags(char elem, flag_t *);

/* Set modifiers */
int get_modifier(char elem, mod_t *);
void set_width(int width, mod_t *);

<<<<<<< HEAD:main.h
#endif
=======
<<<<<<< HEAD:main.c


/* get_print */

int (*get_print(char s))(va_list, flags_t *);



/* get_flag */

int get_flag(char s, flags_t *f);



/* print_alpha */

int print_string(va_list l, flags_t *f);

int print_char(va_list l, flags_t *f);



/* write_funcs */

int _putchar(char c);

int _puts(char *str);



/* print_custom */

int print_rot13(va_list l, flags_t *f);

int print_rev(va_list l, flags_t *f);

int print_bigS(va_list l, flags_t *f);



/* print_address */

int print_address(va_list l, flags_t *f);



/* print_percent */

int print_percent(va_list l, flags_t *f);



#endif
=======
>>>>>>> e9823c82a35831edae215e4c3c30c91bd5081d55:main.h
>>>>>>> bfd5d5fd1b495c3a909f3118d0196c87be9dbd6f:main.c
