#include<stdio.h>
#include<stdbool.h>
int main(void)
{
	int num,div;
	bool prime;
	
	printf("请输入一个数；");
	printf("输入非数字以终止程序\n");
	while (scanf("%d",&num) == 1)
	{
	for (div = 2, prime = true; div * div <= num; div++)
	{
		if (num % div == 0)
		{
			if (div * div == num)
				printf("%d的约数之一是%d\n",num,div);
			else
				printf("%d的约数之二是%d和%d\n",num,div,num / div);
			prime = false;
		}
		
	}
		if (prime)
			printf("%d是一个素数",num);
		printf("请输入一个数；\n");
		printf("输入非数字以终止程序：\n");
		
	}
	return 0;
}
