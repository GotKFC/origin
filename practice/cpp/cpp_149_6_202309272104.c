#include<stdio.h>
int main(void)
{
	int a,b;
	printf("请输入上限：");
	scanf("%d",&b);
	printf("请输入下限：");
	scanf("%d",&a);
	printf("\ta\ta*a\ta*a*a\n");
	for(;a <= b;a++)
		printf("\t%d\t%d\t%d\n",a,a*a,a*a*a);
	return 0;
}
