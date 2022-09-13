#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int com;
	
	for (com = 0; com < 10; com++)

	{
		printf("%d", com);
		if(com != 10)
		{
			printf(',');
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
