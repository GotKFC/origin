#include<stdio.h>
double cal(double a, double b);
int main(void)
{
	double a,b;
	
	printf("请输入两个浮点数：");
	while (scanf("%lf   %lf",&a,&b) == 2)
	{
		printf("%f",cal(a,b));
	}
	return 0;
}
double cal/(double a, double b)
{
	return (a - b) / (a * b);
}
