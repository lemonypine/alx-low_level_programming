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
	int c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
