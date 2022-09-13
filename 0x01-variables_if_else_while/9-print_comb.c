#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while(a <= '7') 
	{ 
		b = a + 1;
	       	while(b <= '8')
	       	{ 
			c = b + 1;
		       	while(c <= '9') 
			{
			       cm_putchar(a, b, c) 
			       {
				       if(a != '7' || b != '8' || c != '9')
				       { 
					       putchar(',');
					       putchar(' ');
				       } 
				       c++; 
			       } b++; 
			}
		       	a++; 
		}
       	} 
} 
