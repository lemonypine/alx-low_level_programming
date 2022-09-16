#include "main.h"
/**
* printString - prints characters "_putchar"
*
* Return: void
*/

void printString(void)
{
	char string[] = "_putchar";
	int i;

	for (i = 0; string[i] != 0; i++)
	{
		_putchar(i);
		_putchar('\n');
	}

}
