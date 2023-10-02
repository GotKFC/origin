#include<stdio.h>
#include<string.h>
int main(void)
{
	char words[20];
	
	scanf("%s",words);
	printf("%s",words);
	printf("%d",strlen(words));
	
	for (int i = strlen(words); i >= 0; i--)
		printf("%c",words[i]);
	return 0;
	
}
