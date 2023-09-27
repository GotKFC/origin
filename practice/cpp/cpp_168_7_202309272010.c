#include<stdio.h>
#define p_can 350
int main(void)
{
	int sq_feet;
	int cans;
	
	printf("请输入您需要刷涂的面积：");
	while (scanf("%d",&sq_feet) == 1)
	{
		cans = sq_feet / p_can;
        cans += sq_feet % p_can == 0 ? 0 : 1;
		printf("You need %d %s\n",cans,cans == 1 ? "can" : "cans");
	}
	return 0;
}
