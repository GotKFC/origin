#include<stdio.h>
#include<stdlib.h>
void main( void )
{
	int first,second,max;

	printf("��������������:");
	scanf("%d,%d",&first,&second);

	max = first;
	if( max < second )
		max = second;

	printf("��һ������ %d\n",first);
	printf("�ڶ������� %d\n",second);
	printf("������ %d\n",max);
	system("pause");
}
