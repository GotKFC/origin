#include<stdio.h>
#define STOP '#'
int main(void)
{
	int i,ch;
	i = 0;
	while ((ch = getchar()) != STOP)
	{
		if (ch == '.')
		{
			putchar('!');
			i++;
		}
		
		else if (ch == '!')
		{
			printf("!!");
			i++;
		}
		else
			putchar(ch);
	}

	printf("%d",i);
}
