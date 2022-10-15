#include <stdio.h>

#include <unistd.h>

/**
 * main - entry point
 * description:print all letters except q and e
 * Return: always 0 (success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{


			putchar(ch);

		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}

