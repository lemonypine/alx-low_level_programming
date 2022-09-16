#include "main.h"
/**
* main - entry point
*
* Return: Always 0 (success)
*/

int main(void)
{
	char string[] = "_putchar";
	int i;

	for (i = 0; string[i] != 0; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
