#include <unistd.h>
#include "main.h"

/**
 *
 * _putchar - writes the character
 *
 * Discretion: it print character
 * return 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
