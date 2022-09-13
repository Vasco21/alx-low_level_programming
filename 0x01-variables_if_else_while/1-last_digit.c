#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Return: Always 0 (Success)
 **/

int main(void)
{

	int n;
	int x;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	x = n % 10;
	if (x > 5)
		printf("%s %d is %d and is greater than 5\n", str, n, x);

	else if (x == 0)
		printf("%s %d is %d and is 0\n", str, n, x);

	else if (x < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, x);

	return (0);
}
