#include<stdio.h>
int main(void)
{
	char english[26];
	int num;
	char zifu = 'a';
	
	for (num = 0; num < 26; num++,zifu++)
		english[num] = zifu;
	
	for (num = 0; num < 26; num++)
		printf("%c\n",english[num]);
	
	return 0;
	
}
