#include <stdlib.h>

#include <time.h>

#include <stdio.h>




/**
 * main - entry point
 *
 * Return: always 0 (success)
*/
int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					/* your code goes there */
				if (n % 10 > 5)
				{
					printf("Last digit of %d is %d and is greater than 5\n", n);
				}
				else if (n % 10 == 0)
				{
					printf("Last digit of %d is %d 0\n", n);
				}
				else 
				{
					printf("last digit of %d is %d and is less than 6 and not 0\n", n);
				}

					return (0);

}
