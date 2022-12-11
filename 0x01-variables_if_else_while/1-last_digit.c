#include <stdlib.h>
#include <time.h>
#include <stdio.h> 
/**
* more headers goes there
* betty style doc for function main goes there
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
int lastdigit = n % 10;

	if (lastdigit > 5)
	printf("The last digit of %d is %d and it is greater than 5\n", n, lastdigit);

	else if (lastdigit == 0)
	printf("The last digit of  %d is %d and it equals zero\n", n, lastdigit);
	else
	printf("last digit of %d is %d and it's less than 6 not 0\n", n, lastdigit);

	return (0);
}
