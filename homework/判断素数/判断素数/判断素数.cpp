#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a = 0,b = 2;
	scanf("%d",&a);
	for(b = 2; b < a; b++)
	{
		if(a % b == 0)
            break;
	}
	if(b < a)
		printf("%d��������",a);
	else
		printf("%d������",a);
	system("pause");
	return 0  ;
}


