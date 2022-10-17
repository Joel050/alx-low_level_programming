#include <stdio.h>

/**
 * *main-program start.
 * *Return:0 if no error, error should be non zero if any.
 * */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
