/*
#include <stdio.h>
int main(void)
{
	int arr[5], i;
	int oddnum[5], evennum[5];
	printf("Please input five integers: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);

		if (arr[i] % 2 == 0)
			evennum[i] += arr[i];
		else
			oddnum[i] += arr[i];

	}
		
	printf("Odd number: ", oddnum);
	printf("Even number: ", evennum);  
	
	return 0;
}
*/


#include <stdio.h>

void print_odd(int arr[]);
void print_even(int arr[]);

int main(void)
{
	int arr[5] = { 0, };
	int i;

	printf("Please input five integers: ");
	
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}

	print_odd(arr);
	print_even(arr);

	return 0;
}

void print_odd(int arr[])
{
	int i;
	int j = 0;
	int odd[5] = { 0, };

	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 != 0)
		{
			odd[j] = arr[i];
			j++;
		}
	}

	printf("Odd numbers: ");
	for (i = 0; i < j; i++)
	{
		if (i < j - 1)
		{
			printf("%d ", odd[i]);
		}
		else
		{
			printf("%d \n", odd[i]);
		}
	}
}

void print_even(int arr[])
{
	int i;
	int j = 0;
	int even[5] = { 0, };

	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 0)
		{
			even[j] = arr[i];
			j++;
		}
	}

	printf("Even numbers: ");
	for (i = 0; i < j; i++)
	{
		if (i < j - 1)
		{
			printf("%d ", even[i]);
		}
		else
		{
			printf("%d \n", even[i]);
		}
	}
}