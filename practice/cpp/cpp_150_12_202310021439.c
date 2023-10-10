#include <stdio.h>
int main(void)
{
	int n;
	while (scanf("%d",&n) == 1 && n > 0)
	{
		double res_1 = 0.0,res_2;
		for (int i = 1, flag = 1; i <= n; i++, flag *= -1)
		{
			res_1 += 1.0 / i;
			res_2 += 1.0 / i *flag;
		}
		printf("%g\n",res_1);
		printf("%g\n",res_2);
		printf("%g\n",res_1 + res_2);
	}
	return 0;
}

