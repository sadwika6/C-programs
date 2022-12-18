#include<stdio.h>
void main()
{
	int a,i=1,sum=0;
	scanf("%d",&a);
	while(i<a)
	{
		if(a%i==0)
		{
			sum+=i;
		}
		i++;
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
