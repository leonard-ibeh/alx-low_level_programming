#include "main.h"

/**
 * print_alphabelt - print all alphabelt is lowercase
 */

void print_alphabelt(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	-putchar('\n');