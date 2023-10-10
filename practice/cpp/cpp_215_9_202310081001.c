#include<stdio.h>
int is_prime(int num);
int main(void)
{
	int n,i;
	
	printf("请输入一个数：");
	scanf("%d",&n);
	
    if (n <= 1)
	{	
		printf("没有素数可以打印\n");
		return 0;
	}
	printf("小于等于%d的素数有：\n",n);
	for (i = 2; i <= n; i++)
	{
		if (is_prime(i) == 1)
			printf("%d,",i);
    }
	return 0;
}

int is_prime(int num)
{
	if (num <= 1)
		return 0;
	for (int i = 2; i * i <= num; i++)
		if(num % i == 0)
			return 0;
	return 1;
}

