#include <stdio.h>

#include <unistd.h>

/**
 * main - entry point
 * description: hexes
 * Return: always 0 (success)
 */

int main(void)
{
	char k;

	char y;

	while (y <= '9')
	{
		putchar(y);
		y++;
	}

	for (k = 'a'; k <= 'f'; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
