#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Main –print if the number is positive, negative or 0
 * Return: Always 0
 */

int main(void)
{
	int n;

	Srand(time(0));
	n = rand() – RAND_MAX / 2;

	if (n > 0)
{
	printf("%d is positive\n", n);

}
Else if (n == 0)
{
	Printf("%d is zero\n", n);
}

else

{

	Printf("%d is negative\n", n);

}

return (0);





