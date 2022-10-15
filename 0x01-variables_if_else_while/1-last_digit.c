#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - entry point
 * description: last number
 * Return: always 0 (success)
 */




int main(void)

{

		int n, I;



			srand(time(0));

				n = rand() - RAND_MAX / 2;
				I = n % 10;

				if (n > 6)
				{
					printf("Last digit of %d is %d and is greater than 5\n", n, I);
				}
				else if (n < 6 && n != 0)
				{
					printf("Last digit of %d is %d and is less than 6 and and not 0\n", n, I);
				}
				else
				{
					printf("Last digit of %d is %d and is 0\n", n, I);
				}


					return (0);

}
