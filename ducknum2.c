#include<stdio.h>
void main()
{
	int n,r,is_duck=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r==0)
		{
			is_duck++;
			break;
		}
		n=n/10;
	}
	if(is_duck==1)
	{
		printf("duck number");
	}
	else
	{
		printf("not a duck number");
	}
}
