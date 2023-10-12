#include<stdio.h>
#include<ctype.h>
int get_first(void);
int main(void)
{
	int ch;
	while ((ch = get_first()) != '#')
		printf("%c",ch);
	return 0;
}
int get_first(void)
{
	int ch;
    do
	{
		ch = getchar();
	}while(isspace(ch));
	while(getchar() != '\n')
		continue;
	return ch;
}
