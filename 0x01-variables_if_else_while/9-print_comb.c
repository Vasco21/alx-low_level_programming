#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char com;
	
	for (com = 0; com < 9; com++)

	{
		printf("%d", com);
		if(com != 9)
		{
			printf(',');
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
