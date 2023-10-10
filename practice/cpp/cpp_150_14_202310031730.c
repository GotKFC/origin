#include<stdio.h>
int main(void)
{
	double a[8],b[8];
	int i,n;
	printf("请输入8个浮点数：");
	for (i = 0; i <= 7; i++)
	{
		scanf("%lf",&a[i]);
    }
	for (i = 0; i <= 7; i++)
		printf("%10f",a[i]);
	printf("\n");
	for (i = 0; i <= 7; i++)
	{
		for (n = 0; n <= i; n++)
			b[i] += a[n];
		printf("%10f",b[i]);
	}
	return 0;
}
