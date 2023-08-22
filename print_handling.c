[20:02, 22/08/2023] Bongiwe: #include "main.h"

/**
 * handle_print - Process and print formatted arguments based on their types.
 * @fmt: Formatted string containing placeholders for arguments.
 * @list: List of arguments to be printed.
 * @ind: Current index within the format string.
 * @buffer: Buffer array for handling print output.
 * @flags: Active formatting flags.
 * @width: Width specifier for output.
 * @precision: Precision specifier for output.
 * @size: Size specifier for input.
 * Return: Number of characters printed, or -1 in case of error.
 */
int handle_print(const char *fmt, int *ind, va_list list, char buffer[],
	int flags, int width, int precision, int size)
{
	int i, unknown_len = 0, printed_chars = -1;

	/* Array of format specifiers and corresponding print functio…
[20:09, 22/08/2023] Bongiwe: #include "main.h"

/**
 * is_printable - Determines if a character is within printable ASCII range.
 * @c: Character to be checked.
 *
 * Return: 1 if 'c' is printable, 0 otherwise.
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Appends ASCII character in hexadecimal format to 'buffer'.
 * @buffer: Array of characters.
 * @i: Index at which to start appending.
 * @ascii_code: ASCII code of the character.
 *
 * Return: Always 3.
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";

	/* Hexadecimal format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - Checks if a character is a digit.
 * @c: Character to be evaluated.
 *
 * Return: 1 if 'c' is a digit, 0 otherwise.
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - Converts a number to the specified data size.
 * @num: Number to be converted.
 * @size: Size specifier indicating the desired data size.
 *
 * Return: Converted value of 'num'.
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - Converts an unsigned number to the specified data size.
 * @num: Unsigned number to be converted.
 * @size: Size specifier indicating the desired data size.
 *
 * Return: Converted value of 'num'.
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
