#include<stdio.h>
int main(void)
{
	double a,b;
	printf("请输入两个浮点数：");
	while (scanf("%lf     %lf",&a,&b) == 2)
	{		
	printf("(%g - %g) / (%g * %g)",a,b,a,b);
	printf(" = %g\n", (a - b) / (a * b));
	}
	return 0;
	
}
