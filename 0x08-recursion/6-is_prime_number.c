#include "main.h"

/**
 * prime_check - Checks to see if numbers is prime
 *
 * @f: Factor check
 *
 * @p: Possible prime number
 *
 * Return: 1 if prime, 0 if not
 *
 */

int prime_check(int f, int p)
{
	if (p < 2 || p % f == 0)
		return (o);
	else if (f > p / 2)
		return (1);
	else
		return (prime_check(f + 1, p));
}
