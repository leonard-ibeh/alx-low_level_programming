#include <stdio.h>

/**
 * main - Entry point, prints file name it was compiled from
 *
 * Return: 0 (Success)
 */

int main(void)
{
	print("%s\n", __FILE__);
	return (0);
}
