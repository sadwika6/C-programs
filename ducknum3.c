#include<stdio.h>
void main()
{
	int n,r,m;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		n=n/10;
		m *= r;
	}
	if(m==0)
	{
		printf("Duck number");
	}
	else
	{
		printf("Not a duck number");
	}
}
