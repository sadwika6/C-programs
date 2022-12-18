#include<stdio.h>
void main()
{
	int n,r;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		n=n/10;
		if(r==0)
		{
			printf("Duck number");
			break;
		}
		else
		{
			r++;
		}
	}
	if(r!=0)
	{
		printf("not a duck number");
	}
}
