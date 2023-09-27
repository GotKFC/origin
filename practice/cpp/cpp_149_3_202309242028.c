#include<stdio.h>
int main(void)
{
	int a,b;
	char ch = 'F';
	for (a = 1; a <= 6; a++)
	{
		for (b = 1,ch = 'F'; b <= a; b++,ch--)
		{
			printf("%c",ch);
		}
		printf("\n");
	}
	return 0;
}
