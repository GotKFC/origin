#include<stdio.h>
#include<stdlib.h>
void main(void)
{
	float first,second,third,fourth,min;
	printf("请输入四个浮点数:");
	scanf("%f,%f,%f,%f",&first,&second,&third,&fourth);
	min = first;
	if(second < min)
		min = second;
	if(third < min)
		min = third;
	if(fourth < min)
		min = fourth;
	printf("%f、%f、%f、%f中的最小数是%f\n",
		first,second,third,fourth,min);
	system("pause");
}