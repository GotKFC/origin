#include<stdio.h>
int main(void)
{
	int a[8];
	
	printf("Please enter eigth counts:");
	for (int i = 0; i < 8; i++)
		scanf("%d",&a[i]);
	printf("这八个数的倒叙是：");
	for (int i = 7; i >= 1; i--)
		printf("  %d",a[i]);
	return 0;
}

