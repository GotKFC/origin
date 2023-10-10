#include<stdio.h>
int main(void)
{
	int fri_num,week;
	for (fri_num = 5, week = 1; fri_num <= 150; week++)
	{
		fri_num = (fri_num - week) * 2;
		printf("第%d周，Rabnud博士的朋友数量为%d\n",week,fri_num);
	}
	printf("After %d weeks, doctor Rabnud's friends beyond Dunbar's number",week - 1);
	return 0;
}
