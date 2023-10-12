#include<stdio.h>
#include<ctype.h>
#include<math.h>

int get_choice(void);
int get_first(void);
float get_float(void);

int main(void)
{
	float a,b;
	int ch;

	while((ch = get_choice()) != 'q')
	{
		printf("Please enter the first number:");
		a = get_float();
		printf("Please enter the second number:");
		b = get_float();
		switch(ch)
		{
		case 'a':
			{
			printf("The result is %f\n",a + b);
			break;
			}
		case 'b':
			{
			printf("The result is %f\n",a - b);
			break;
			}
		case 'c':
			{
			printf("The result is %f\n",a * b);
			break;
			}
		case 'd':
			{	while(fabs(b) <= 1e-6)
			{
				printf("Enter a number other than 0");
				b = get_float();
			}
		    printf("The result is %f\n",a / b);
		    break;
			}
	    }
		
    }
	printf("Bye");
	
	return 0;
}

int get_first(void)
{
	int ch;
	do
	{
		ch = getchar();
	}while(isspace(ch));
	while (getchar() != '\n')
		continue;
	return ch;
}

int get_choice(void)
{
	int ch;
	
	printf("Enter your operation of your choice:\n");
	printf("a. add                    b.subtract\n");
	printf("c.multipy                 d.divide\n");
	printf("q. qiute\n");
	ch = get_first();
	while (ch != 'a' && ch != 'b' && ch != 'c' && ch != 'd' && ch != 'q')
	{
		printf("Please enter with a,s,m,d or q :");
		ch = get_first();
	}
	return ch;
}

float get_float(void)
{
	int ch;
	float input;
	
	while(scanf("%f",&input) != 1)
	{
		while ((ch = getchar()) != '\n')
		{
			putchar(ch);
		}
	printf(" is not an number.\n");
	printf("Please enter a float number:");
	}
	return input;
}
