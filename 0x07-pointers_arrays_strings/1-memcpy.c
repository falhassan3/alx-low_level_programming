#include "main.h"
/*
 * File: 1-memcpy.c
 * Auth: Fareed Alhassan
 */

/**
 * *_memcpy - Copies @n bytes from the memory area pointed
 * to by @src into that pointed to by @dest.
 * @dest: A pointer to the memory area to copy @src into.
 * @src: The source buffer to copy characters from.
 * @n: The number of bytes to copy from @src.
 *
 * Return: A pointer to the destination buffer @dest
 */

char *_memcpy(char *dest, unsigned int n)
{
	unsigned int index;
	unsigned char *destination;
	const unsigned char *source;

	for (index = 0; index < n; index++)
		destination (index) = source (index);

	return (dest);
}
