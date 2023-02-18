#include <stdio.h>
/**
 * main - main block
 *  prints all single digit numbers of base 10
 *   starting from o
 *   Return: 0 (success)
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
	}

	putchar('\n');
	return (0);
}
