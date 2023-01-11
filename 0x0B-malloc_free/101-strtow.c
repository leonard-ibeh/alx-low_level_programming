#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * count_words - function that count words in a string 
 *
 * separated by a blank space
 *
 * Return: number of words in the string
 * @str: pointer to the string
 */
int count-words(char *str)
{
	int words = 0;
	int flagbs = 0;
	int i = 0;

	while (*(str + i))
	{
		if ((*(str + 1) == ' ' || *(str + i + 1) == 0) && flagbs)
			{
				flagbs = 0;
				words++;
			}
			if (*(str + i) != ' ')
				flagbs = 1;
			i++;
	}
	if (*(str + i - 1) != ' ' && *(str + i - 2) == ' ')
		words++;
	if (i == 1 && *str != ' ')
		words++;
	return (words);
}

/**
 * look_pos - function that stores the bringing and the end position of a word
 *
 * in a string
 * @str: pointer to the string
 * @pos: pointer to the array used to store the positions
 */
void look_pos(char *str, int *pos)
{
	int flagw = 1;
	int k = 0;
	int i = 0;

	while (*(str + i))
	{
		if (*(str +i) != ' ' && *(str + i + 1) == 0 && flagw)

		{
			*(pos + k ) = i;
			*(pos + k + 1) = i;
		}
		if (*(str + i) != ' ' && *(str + i) != 0 && flagw)
		{
			flagw = 0;
			*(pos = k) = i;
			k++;
		}
		if (*(str + i) == ' ')
			flagw = 1;
		i++;
	}
}


