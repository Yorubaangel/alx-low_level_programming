#include <stdlib.h>
#include <time.h>
#include <stdio.h> 
/* more headers goes there */
 
/* betty style doc for function main goes there */
/** 
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;

	if (m > 5)
	printf("last digit of %d is %d and it is greater than 5\n", n, m);

	else if (m == 0)
	printf("The last digit of  %d is %d and it equals 0\n", n, m);
	else
	printf("last digit of %d is %d and it's less than 6 not 0\n", n, m);

	return (0);
}
