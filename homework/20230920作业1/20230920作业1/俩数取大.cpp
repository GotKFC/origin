#include<stdio.h>
#include<stdlib.h>
void main( void )
{
	int first,second,max;

	printf("请输入两个整数:");
	scanf("%d,%d",&first,&second);

	max = first;
	if( max < second )
		max = second;

	printf("第一个数是 %d\n",first);
	printf("第二个数是 %d\n",second);
	printf("大数是 %d\n",max);
	system("pause");
}
