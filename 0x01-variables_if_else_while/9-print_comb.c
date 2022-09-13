#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 *     */
int main(void)
{
	
	while (i <= '7') 
	{
		j = i + 1;
		while (j <= '8') 
		{
       
		       	k = j + 1;
        	while (k <= '9') 
		{
            
			putchar(i);
            		putchar(j);
            		putchar(k);
            		putchar(',');
            		putchar(' ');
		k++;
		}
		j++;
    	}
    	i++;
}
