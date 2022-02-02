#include <stdio.h>

long factorial(long number)
{
	long factorial = 1;

	for (long i = 2; i <= number; i++)
	{
		factorial *= i;
	}

	return factorial;
}

int main()
{
	printf("Enter a positive integer: ");
	long number;
	scanf("%li", &number);

	for (long i = 2; i <= number; i++)
	{
		printf("%ld! = %ld\n", i, factorial(i));
	}
}