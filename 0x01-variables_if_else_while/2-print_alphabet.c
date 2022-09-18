#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (success)
*
* Description: prints alpabet letters
*/
int main(void)
{
	char c;

	while (c <= 'a' && c >= 'z')
	{
		putchar(c);
		c++;
	}
	return (0);
}

