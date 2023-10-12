#include<stdio.h>
int get_first();
int main(void)
{   
	int ch;
	double pre_hour;
	printf("*****************************************************************\n\n");
	printf("Enter the number corresponding ti the desired pay rate or action:\n");
	printf("a) $8.75/hr              b) $9.33/hr\n");
	printf("c) $10.00/hr             d) $11.20/hr\n");
	printf("q) qiuit\n");
	printf("*****************************************************************\n");
	ch = get_first();
	switch(ch)
	{
	case 'a':
		pre_hour = 8.75;
		break;
	case 'b':
		pre_hour = 9.33;
		break;
	case 'c':
		pre_hour = 10.00;
		break;
	case 'd':
		pre_hour = 11.20;
		break;
	}
	double hours,tax,salary,taxed_salary;
	
	while (ch != 'q')
	{
		while (scanf("%lf",&hours) != 1 || hours < 0)
		{
			while (hours =='\n')
				continue;
			printf("Please enter an hours whitch beyond 0\n");
		}
		salary = (hours > 40 ? (40 + (hours - 40) * 1.5) * pre_hour : hours * pre_hour);
		if (salary <= 300)
			tax = salary * 0.15;
		if (salary > 300 && salary <= 450)
			tax = 300 * 0.15 + (salary - 300) * 0.2;
		if (salary > 450)
			tax = 300 * 0.15 + 150 * 0.2 + (salary - 450) * 0.25;
		taxed_salary = salary - tax;
		printf("%f\n",taxed_salary);
	}
	printf("Done!");
	return 0;
}
int get_first(void)
{
	int ch;
	
	do
	{
		ch = getchar();
	}while(ch == ' ');
	while (getchar() != '\n')
		continue;
	return ch;
}
