#include<stdio.h>
#define p_hour 1000
int main(void)
{
	double hours,tax,salary,taxed_salary;
	
	while (scanf("%lf",&hours) != 1 || hours < 0)
	{
		while (hours =='\n')
			continue;
		printf("Please enter an hours whitch beyond 0\n");
	}
	salary = (hours > 40 ? (40 + (hours - 40) * 1.5) * 10.00 : hours * 10.00);
	if (salary <= 300)
		tax = salary * 0.15;
	if (salary > 300 && salary <= 450)
		tax = 300 * 0.15 + (salary - 300) * 0.2;
	if (salary > 450)
		tax = 300 * 0.15 + 150 * 0.2 + (salary - 450) * 0.25;
    taxed_salary = salary - tax;
	printf("%f",taxed_salary);
	return 0;
}
