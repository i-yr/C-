#include <stdio.h>

int num;
int main()
{
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);

	if (num > 0)
		BinaryNum(num);
	else
		printf("0");
	return ;
}
int BinaryNum(int num)
{	
	if (num < 1)
		return;

	BinaryNum(num / 2);
	printf("%d", num % 2);

}









