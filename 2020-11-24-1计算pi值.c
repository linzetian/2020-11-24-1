//计算pi值
#include<stdio.h>
int main()
{
	double pi=0;
	int n = 1;
	int flag = 1;
	while ((1.0 /(2* n-1))>1e-6)
	{
		pi += flag*(1.0/(2*n-1));
		if (n % 2 == 0)
			flag = 1;
		else
			flag = -1;
		n++;
	}
	printf("pi=%lf",4*pi);
	return 0;
}