#include<stdio.h>
void main()
{
	int a,i,sum=0;
	scanf("%d",&a);
	for(i=1;i<a;i++)
	{
		if(a%i==0)
		{
		sum += i;
	    }
	}
	if(sum==a)
	{
		printf("Perfect number");
	}
	else
	{
		printf("Not a perfect number");
	}
}
