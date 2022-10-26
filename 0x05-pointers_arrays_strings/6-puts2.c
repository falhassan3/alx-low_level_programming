#include "main.h"

/**
 * puts - prints one character out of two
 * @str: input
 * return: print
 */

void puts2(char *str)
/** this is a puts2 function comment */
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
