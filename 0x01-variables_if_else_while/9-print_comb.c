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
		if (c == '9')
		{
			c++;
			continue;
		}
		putchar(',');
		putchar(' ');
		c++;
	}
	putchar('\n');

	return (0);
}
