#include<stdio.h>
int show_menu(void);
int main(void)
{   
	double pre_hour;
	int n;
	printf("*****************************************************************\n\n");
	printf("Enter the number corresponding ti the desired pay rate or action:\n");
	printf("1) $8.75/hr              2) $9.33/hr\n");
	printf("3) $10.00/hr             3) $11.20/hr\n");
	printf("5) qiuit\n");
	printf("*****************************************************************\n");
	scanf ("%d",&n);
	switch(n)
	{
	case 1:
		pre_hour = 8.75;
		break;
	case 2:
		pre_hour = 9.33;
		break;
	case 3:
		pre_hour = 10.00;
		break;
	case 4:
		pre_hour = 11.20;
		break;
	}
	double hours,tax,salary,taxed_salary;
	
    while (n != 5)
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
