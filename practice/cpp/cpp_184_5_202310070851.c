#include<stdio.h>
#define STOP '#'
int main(void)
{
	int ch,i;
	i = 0;
	while((ch = getchar()) != STOP)
	{
		switch (ch)
		{
		case '.':
			putchar('!');
			i++;
			break;
		case '!':
			printf("!!");
			i++;
			break;
		default:
			putchar(ch);
		}
	}
	printf("\n");
	printf("%d",i);
	return 0;
}
