#include<stdio.h>
#include<stdlib.h>
void main(void)
{
	float a,b,c,max;
	printf("请输入三个浮点数：");
	scanf("%f,%f,%f",&a,&b,&c);
	a = max;
	if(b > max)
		max = b;
	if(c > max)
		max = c;
	printf("%f",max);
	system("pause");
}