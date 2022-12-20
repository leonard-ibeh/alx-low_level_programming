#include "main.h"
/**
 * _strcpy - copy the string pointed to by scr to dest
 * @dest: char to check
 * @scr: char to check
 * Return: 0 is success
 */
char *_strcpy(char *dest, char *scr)
{
	int n = 0;
	int i;

	while (src[n] != '\0')
	{
		n++;
	}

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	i = i;
	while (i <= n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
