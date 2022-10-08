#include <stdio.h>
int main(void)
{
	int num, i;
	int count = 0;
	printf("Please enter a number: ");
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			count += 1;
		}
	}
	if (count == 2)
	{
		printf("It is a prime number.");
	}
	else
	{
		printf("It is not a prime number.");
	}
	return 0;
}