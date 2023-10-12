#include<stdio.h>
#include<ctype.h>
int main(void)
{
	int ch,i,k;
	i = 0;
	k = 0;
	while ((ch = getchar()) != EOF)
	{
		if (islower(ch) != 0)
			i++;
		else if (isupper(ch) != 0)
			k++;
	}
	printf("小写字母的个数为：%d\n大写字母的个数为：%d",i,k);
	return 0;
}
