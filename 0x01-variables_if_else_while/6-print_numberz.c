#include <stdio.h>

#include <unistd.h>

/**
 * main - entry point
 * description: print numbers
 * Return: always 0 (success)
 */

int main(void)
{
	int v;

	for (v = 0; v < 10; v++)
	{
		putchar(v);
	}
	putchar('\n');
	return (0);
}
