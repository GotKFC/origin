#include<stdio.h>
int main(void)
{
	double money_1 = 100.0,money_2 = 100.0;
	int year;
	for (year = 0; money_2 <= money_1; year++)
	{
		money_1 += 10.0;
		money_2 += 0.05 * money_2;
	}
	printf("%d年后Deirdre的投资额会超过Daphne\n",year);
	printf("此时Daphne的投资额为%lf\nDeirdre的投资额为%lf",money_1,money_2);
	return 0;
	
}
