#include<stdio.h>
#include<ctype.h>
int main(void)
{
	int high = 100;
	int low = 1;
	int guess = (high + low) / 2;
	int respond;
	
	printf("Is your number %d?",guess);
	while ((respond = getchar()) != 'y')
	{
		if (respond == '\n')
			continue;
		if (tolower(respond) != 'h' &&tolower(respond) != 'l')
		{
			printf("Sorry,I can't understand what you enter\n");
			printf("Please enter h for hige,l for low\n");
			continue;
		}
		if (tolower(respond) == 'h')
			high = guess - 1;
		if (tolower(respond) == 'l')
			low = guess + 1;
		guess = (high + low) / 2;
		printf("Well , is it %d\n",guess);
	}
	printf("I can do it!!");
	return 0;
	
}
