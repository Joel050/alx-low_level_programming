#include <stdio.h>
/**
 *main-program start.
 *Return:0 If no error, error should be non zero if any
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
