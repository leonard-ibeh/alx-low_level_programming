#include "main.h"
/**
 * _strcpy - copy the string pointed to by scr to dest
 * @dest: char to check
 * @scr: char to check
 * Return: 0 is success
 */
char *_strcpy(char *dest, char *scr)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
