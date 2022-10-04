#include <stdio.h>
int main(void)
{
	int i, j, n;

	for (i = 1; i <= 5; i++)
	{
		for (j = 5; j > i; j--)
		{
			printf(" ");
		}

		for (n = 1; n <= 2*i-1; n++)
		{
			printf("*");
		}

		printf("\n");
	}
	return 0;
}