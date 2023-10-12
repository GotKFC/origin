#include<stdio.h>
#define STOP '#'
int main(void)
{
	int i = 0;
	int cur,pre;
	
	while ((cur = getchar()) != STOP)
	{
		if (pre == 'e' && cur == 'i')
			i++;
		pre = cur;
	}
	printf("%d",i);
		return 0;
}

