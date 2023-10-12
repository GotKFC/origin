#include<stdio.h>
#define STOP '#'
int main(void)
{
	int space,enter,others;
	char ch;
	space = enter = others = 0;
	
	while ((ch = getchar()) != STOP)
	{
		if (ch == ' ')
			space++;
		else if (ch == '\n')
			enter++;
		else
			others++;
	}
	printf("This text has %d space, %d enter and %d others",space,enter,others);
	return 0;
}
