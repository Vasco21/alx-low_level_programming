#include <unistd.h>

/**
 *
 *Main check description
 *
 *Discretion: it print my name vasco,followed by new line.
 *return 0
 */

int main(void)
{
	char name[6] = "Vasco";
	int i;

	for (i = 0; i < 6; i++)
		_putchar(name[i]);
	_putchar("\n");
	
	return (0);
}
