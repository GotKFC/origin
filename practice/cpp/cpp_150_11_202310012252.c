#include<stdio.h>
#include<string.h>
int main(void)
{
	char num[100];
	int i;
	printf("请输入八个数:\n");
	scanf("%s",num);
	printf("您输入的八个数为：%s\n",num);
	for (i = strlen(num); i >= 0; i--)
		printf("%c",num[i]);
	return 0;
}
