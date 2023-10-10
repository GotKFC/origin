#include<stdio.h>
#define STOP '#'
int main(void)
{
	int flag = 0,n = 0;
	char ch;
	
	while ((ch = getchar()) != STOP)
	{
		if (ch == 'g' && flag == 0)
			flag = 1;
		else if (ch == 's' && flag == 1)
		    flag = 2;
	    else if (ch == 'y' && flag == 2)
		{
			n++;
			flag = 0;
		}
		else
			flag = 0;
	}
	printf("%d\n",n);
	return 0;
}

	
