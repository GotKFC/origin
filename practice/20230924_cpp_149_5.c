#include<stdio.h>
int main(void)
{
	int a,b,c,d;
	char ch = 'A', cha = ' ';
	
	for (a = 1; a <= 5; a++)
	{
		for (b = 4; b >= a; b--)
			printf("%c",cha);
		for (c = 1,ch = 'A'; c <= a; c++,ch++)
			printf("%c",ch);
		for (d = 1, ch = 'A',ch = ch + a - 2; d < a; d++,ch--)
			printf("%c",ch);
			
			
		printf("\n");
	}
	return 0;
	
}
