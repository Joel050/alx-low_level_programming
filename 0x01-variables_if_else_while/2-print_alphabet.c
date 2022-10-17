#include <stdio.h>

/**
 *main- writing program that prints alphabet in lower case
 *Return:0 if error return zero 
*/
int main(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
