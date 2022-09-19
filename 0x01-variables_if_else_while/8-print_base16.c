#include <stdio.h>
/**
* main - entry point
*
* Return: always 0 (success)
*/
int main(void)
{
	int c;

	c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	c = 'a';

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
