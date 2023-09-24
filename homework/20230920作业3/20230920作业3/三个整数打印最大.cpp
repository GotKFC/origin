#include<stdio.h>
#include<stdlib.h>
int big(int a,int b)
{
	int c = b;
	if(a > b)
		c = a;
	return c;
}
void main(void)
{
	int first,second,third,max;

	printf("请输入三个整数:");
	scanf("%d, %d, %d",&first,&second,&third);
	max = big(first,second);
	max = big(third,max);

	printf("%d、%d、%d中的最大数是%d\n",
		first,second,third,max);
	system("pause") ;
}