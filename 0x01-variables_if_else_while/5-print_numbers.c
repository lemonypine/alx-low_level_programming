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
	int num;

	num = 0;
	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");

	return (0);
}

