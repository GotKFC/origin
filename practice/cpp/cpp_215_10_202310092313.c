#include<stdio.h>
int main(void)
{
	int category;
	float salary,taxed_salary,tax;
	
	printf("请输入您的类别（1为单身；2为户主；3为已婚共有；4为已婚离异):");
	while (scanf("%d",&category) == 1 && (category >= 1 && category <= 5) )
	{
		printf("请输入您的薪资:");
		scanf("%f",&salary);
		switch(category)
		{
		case 1:
			tax = (salary > 17850 ? (salary - 17850) * 0.28 + 17850 * 0.15 : salary * 0.15);
			break;
		case 2:
			tax = (salary > 23900 ? (salary - 23900) * 0.28 + 23900 * 0.15 : salary * 0.15);
			break;
		case 3:
			tax = (salary > 29750 ? (salary - 29750) * 0.28 + 29750 * 0.15 : salary * 0.15);
			break;
		case 4:
			tax = (salary > 14875 ? (salary - 14875) * 0.28 + 14875 * 0.15 : salary * 0.15);
			break;
		}
		taxed_salary = salary - tax;
		printf("您的税后薪水为:%f\n",taxed_salary);
		printf("请再次输入您的类别:");
			
	}
	return 0;
}
