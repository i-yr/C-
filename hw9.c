#include <stdio.h>
int convCase(int ch)
{
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return ch;	
}

int main(void)
{
	int ch = 0;
	printf("Input> ");
	ch = getchar();
	ch = convCase(ch);
	printf("Output> ");
	putchar(ch);
	
	while (1)
	{
		ch = getchar();
		ch = convCase(ch);
		if (ch == EOF)
			break;
		putchar(ch);
	}
	return 0;
}
