#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Main- Prints the last digit
 * and whether it is greater than 5,less than 6  and not 0;and is 0
 * Return : Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("last digit of %d ld %d and is greater than 5\n", n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) !-0)
	{
		printf("Last digit of %d is %d and id less than 6 and not 0\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and id 0\n", n, n % 10);
	}
	return (0);
}
