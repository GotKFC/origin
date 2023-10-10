#include<stdio.h>
#include<string.h>
int main(void)
{
	char input[255];
	int a = 0;
	printf("Please enter one line of characters:\n");
	while(scanf("%c",&input[a]) && a + 1 <255 && input[a] != '\n' )
	{
		++a;
	}
	for (a--; a >= 0; a--)
		printf("%c",input[a]);
	return 0;
}
