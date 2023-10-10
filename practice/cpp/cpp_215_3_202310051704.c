#include<stdio.h>
int main(void)
{
	int i,a,b,m,n;
	i=a=b=m=0;
	
	while (scanf("%d",&n) && n != 0)
	{	
	    if (n % 2 == 0)
		{
			a += n;
			i++;
		}
		else
		{
			b += n;
			m++;
		}
	}
	printf("偶数的个数为%d，偶数的平均数为%f\n奇数的个数为%d，奇数的平均数为%f",i,(float)a / i,m,(float)b / m);
	return 0;
}
