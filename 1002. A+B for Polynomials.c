#include <stdio.h>

struct polynomial{
	int exponent;
	double coefficient;
};
int main()
{
	int i,k1,k2,n;
	double an,a[1001]={0};
	scanf("%d",&k1);
	for(i=0;i<k1;i++)
	{
		scanf("%d %lf",&n,&an);
		a[n]+=an;
	}
	scanf("%d",&k2);
	for(i=0;i<k2;i++)
	{
		scanf("%d %lf",&n,&an);
		a[n]+=an;
	}
	struct polynomial polynomials[1001];
	int cnt=0;
	for(i=1000;i>=0;i--)
	{
		if(a[i]!=0)
		{
			polynomials[cnt].exponent=i;
			polynomials[cnt].coefficient=a[i];
			cnt++;
		}
	}
	printf("%d",cnt);
	for(i=0;i<cnt;i++)
	{
		printf(" %d %.1lf",polynomials[i].exponent,polynomials[i].coefficient);
	}
	printf("\n");
	return 0;
}
