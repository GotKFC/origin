#include<stdio.h>
int main(void)
{
	int a,b;
	char ch = 'A';
	for (a = 1; a <= 6; a++)
	{
		for (b = 1; b <= a; b++,ch++)
		{
			printf("%c",ch);
		}
		printf("\n");
	}
	return 0;
}
