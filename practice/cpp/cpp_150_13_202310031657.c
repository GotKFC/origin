#include<stdio.h>
int main(void)
{
	int num[8];
	int n = 1, i = 1;
	for (i = 0; i <= 7; i++)
	{
		num[i] = n;
		n *= 2;
	}
	i = 0;
	do
	{
		printf("%d\n",num[i]);
		i++;
	}
	while(i <= 7);
	return 0;
}
