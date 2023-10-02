#include<stdio.h>
int main(void)
{
	int a,b,sum;
	printf("请分别输入上、下限：");
	printf("\n");
	
	while (scanf("%d%d",&a,&b) == 2 && a > b)
	{
		for (sum = 0;a >= b; b++)
		{
			sum += b * b;
		}
	    printf("结果为:%d",sum);
	}
	return 0;
}
