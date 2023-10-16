#include "main.h"

/**
 * *_strcpy - To copy the string pointed to a src
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to a pointer `src` to
 * the buffer pointed to a `dest`
 * Return: Pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int index = -1;

	do {
		index++;
		dest[index] = src[index];
	} while (src[index] != '\0');

	return (dest);
}
