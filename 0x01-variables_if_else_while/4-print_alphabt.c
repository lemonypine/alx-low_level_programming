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

	for (c = 'a'; c <= 'z'; c++)
	{
	if (c != 'q' && c != 'e')
	{
		putchar(c);
	}
	}
	putchar('\n');

	return (0);
}

